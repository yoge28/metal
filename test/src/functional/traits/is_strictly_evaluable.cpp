// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <metal/functional/traits/is_strictly_evaluable.hpp>
#include <metal.hpp>

#include "test.hpp"

using namespace metal;

static_assert(not_<is_strictly_evaluable_t<test::alias>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::empty>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::call>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::union_>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::evaluable>>::value, "");
static_assert(is_strictly_evaluable_t<test::strict>::value, "");

static_assert(not_<is_strictly_evaluable_t<test::alias, test::a0>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::empty, test::a0>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::call, test::a0>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::union_, test::a0>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::evaluable, test::a0>>::value, "");
static_assert(is_strictly_evaluable_t<test::strict, test::a0>::value, "");

static_assert(not_<is_strictly_evaluable_t<test::alias, test::a0, test::a1>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::empty, test::a0, test::a1>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::call, test::a0, test::a1>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::union_, test::a0, test::a1>>::value, "");
static_assert(not_<is_strictly_evaluable_t<test::evaluable, test::a0, test::a1>>::value, "");
static_assert(is_strictly_evaluable_t<test::strict, test::a0, test::a1>::value, "");