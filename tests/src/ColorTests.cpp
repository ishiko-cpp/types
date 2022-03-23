/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "ColorTests.hpp"
#include "Ishiko/Types/Color.hpp"

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
    Ishiko::Color color(Ishiko::Color::eBlack);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest2(Test& test)
{
    Ishiko::Color color(Ishiko::Color::eGreen);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest3(Test& test)
{
    Ishiko::Color color(Ishiko::Color::eRed);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red, 0xFF);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_TEST_PASS();
}

void ColorTests::ConstructorTest4(Test& test)
{
    Ishiko::Color color(0, 1, 2);

    ISHIKO_TEST_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(color.green, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(color.blue, 2);
    ISHIKO_TEST_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_TEST_PASS();
}
