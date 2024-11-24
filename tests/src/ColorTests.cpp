// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "ColorTests.hpp"
#include "Ishiko/Types/Color.hpp"
#include "Ishiko/Types/ColorName.hpp"

using namespace Ishiko;

ColorTests::ColorTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Color tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
}

void ColorTests::ConstructorTest1(Test& test)
{
    Color color(ColorName::black);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest2(Test& test)
{
    Color color(ColorName::green);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest3(Test& test)
{
    Color color(ColorName::red);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest4(Test& test)
{
    Color color(0, 1, 2);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red_component, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green_component, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue_component, 2);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha_component, 0xFF);
    ISHIKO_TEST_PASS();
}
