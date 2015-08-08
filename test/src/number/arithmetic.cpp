// Copyright Bruno Dutra 2015
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.txt or copy at http://boost.org/LICENSE_1_0.txt)

#include <metal/number/arithmetic.hpp>
#include <metal/number/comparison/equal_to.hpp>

#include "test.hpp"

using namespace metal;

METAL_TEST_ASSERT((equal_to<inc_t<test::n0>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<dec_t<test::n0>, neg_t<test::n1>>::value));
METAL_TEST_ASSERT((equal_to<inc_t<dec_t<test::n1>>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<inc_t<dec_t<test::n1>>, dec_t<inc_t<test::n1>>>::value));
METAL_TEST_ASSERT((equal_to<neg_t<test::n0>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<inc_t<neg_t<test::n1>>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<neg_t<neg_t<test::n1>>, test::n1>::value));

METAL_TEST_ASSERT((equal_to<add_t<test::n0>, mul_t<test::n0, test::n1>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1>, mul_t<test::n1, test::n1>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2>, mul_t<test::n1, test::n3>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2, test::n3>, mul_t<test::n2, test::n3>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2, test::n3, test::n4>, mul_t<test::n2, test::n5>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2, test::n3, test::n4, test::n5>, mul_t<test::n3, test::n5>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2, test::n3, test::n4, test::n5, test::n6>, mul_t<test::n3, test::n7>>::value));
METAL_TEST_ASSERT((equal_to<add_t<test::n0, test::n1, test::n2, test::n3, test::n4, test::n5, test::n6, test::n7>, mul_t<test::n4, test::n7>>::value));

METAL_TEST_ASSERT((equal_to<sub_t<test::n0>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n2, test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n3, test::n1, test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n4, test::n1, test::n1, test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n5, test::n1, test::n1, test::n1, test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n6, test::n1, test::n1, test::n1, test::n1, test::n1, test::n1>, test::n0>::value));
METAL_TEST_ASSERT((equal_to<sub_t<test::n7, test::n1, test::n1, test::n1, test::n1, test::n1, test::n1, test::n1>, test::n0>::value));

METAL_TEST_ASSERT((equal_to<mul_t<test::n2>, test::number<2>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2>, test::number<4>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2>, test::number<8>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2, test::n2>, test::number<16>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2, test::n2, test::n2>, test::number<32>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2, test::n2, test::n2, test::n2>, test::number<64>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2>, test::number<128>>::value));
METAL_TEST_ASSERT((equal_to<mul_t<test::n2, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2>, test::number<256>>::value));

METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<1>>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<2>, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<4>, test::n2, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<8>, test::n2, test::n2, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<16>, test::n2, test::n2, test::n2, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<32>, test::n2, test::n2, test::n2, test::n2, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<64>, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2>, test::n1>::value));
METAL_TEST_ASSERT((equal_to<metal::div_t<test::number<128>, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2, test::n2>, test::n1>::value));