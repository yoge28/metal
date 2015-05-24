// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MPL2_METAFUNCTIONAL_FORWARD_HPP
#define BOOST_MPL2_METAFUNCTIONAL_FORWARD_HPP

#include <boost/mpl2/core/integral.hpp>
#include <boost/mpl2/metafunctional/pack.hpp>
#include <boost/mpl2/metafunctional/traits/is_evaluable.hpp>

namespace boost
{
    namespace mpl2
    {
        namespace detail
        {
            template<
                template<typename...> class expr,
                typename packed,
                typename = pack<>,
                typename headed = typename is_evaluable<head<packed> >::type,
                typename evaluable = true_
            >
            struct forward_impl;

            template<
                template<typename...> class expr,
                typename packed,
                typename... args,
                typename headed,
                typename evaluable
            >
            struct forward_impl<expr, packed, pack<args...>, headed, evaluable> :
                    forward_impl<
                        expr,
                        tail<packed>,
                        pack<args..., typename head<packed>::type>
                    >
            {};

            template<
                template<typename...> class expr,
                typename packed,
                typename... args,
                typename evaluable
            >
            struct forward_impl<expr, packed, pack<args...>, false_, evaluable>
            {};

            template<
                template<typename...> class expr,
                typename packed,
                typename... args
            >
            struct forward_impl<expr, packed, pack<args...>, false_, typename is_evaluable<expr<args...> >::type> :
                    expr<args...>
            {};
        }

        template<template<typename...> class expr, typename... args>
        struct forward :
                detail::forward_impl<expr, pack<args...> >
        {};
    }
}

#endif