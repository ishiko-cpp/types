// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "RGBAColorTests.hpp"
#include "Ishiko/Types/RGBAColor.hpp"
#include "Ishiko/Types/ColorName.hpp"

using namespace Ishiko;

RGBAColorTests::RGBAColorTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "RGBAColor tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
}

void RGBAColorTests::ConstructorTest1(Test& test)
{
    RGBAColor color(ColorName::black);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void RGBAColorTests::ConstructorTest2(Test& test)
{
    RGBAColor color(ColorName::green);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void RGBAColorTests::ConstructorTest3(Test& test)
{
    RGBAColor color(ColorName::red);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void RGBAColorTests::ConstructorTest4(Test& test)
{
    RGBAColor color(0, 1, 2);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 2);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}
