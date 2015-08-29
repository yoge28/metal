// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#ifndef METAL_LAMBDA_BIND_HPP
#define METAL_LAMBDA_BIND_HPP

#include <metal/lambda/apply.hpp>
#include <metal/lambda/lambda.hpp>
#include <metal/lambda/quote.hpp>

namespace metal
{
    /// \ingroup lambda
    /// \brief ...
    template<typename...>
    struct bind;

    /// \ingroup lambda
    /// \brief Eager adaptor for \ref bind.
    template<typename... args>
    using bind_t = typename metal::bind<args...>::type;

    namespace detail
    {
        template<typename val>
        struct quasiquote
        {
            using type = val;
        };

        template<typename... args>
        using quasiquote_t = typename quasiquote<args...>::type;

        template<
            template<template<typename...> class> class lambda,
            template<typename...> class expr
        >
        struct quasiquote<lambda<expr>>
        {
            template<typename... args>
            using wrapper = just<expr<args...>>;

            using type = metal::lambda<wrapper>;
        };

        template<template<typename...> class expr, typename... params>
        struct quasiquote<expr<params...>>
        {
            using type = apply<
                quote_t<quasiquote_t<lambda<expr>>>,
                quasiquote_t<params>...
            >;
        };
    }
    template<typename lbd, typename... args>
    struct bind<lbd, args...> :
            apply<detail::quasiquote_t<lbd>, args...>
    {};
}

#endif
