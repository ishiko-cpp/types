/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "ColorTests.h"
#include "Ishiko/Types/Color.h"

using namespace Ishiko::Tests;

ColorTests::ColorTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "Color tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
}

void ColorTests::ConstructorTest1(Test& test)
{
    Ishiko::Color color(Ishiko::Color::eBlack);

    ISHIKO_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_FAIL_IF_NEQ(color.green, 0);
    ISHIKO_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_PASS();
}

void ColorTests::ConstructorTest2(Test& test)
{
    Ishiko::Color color(Ishiko::Color::eGreen);

    ISHIKO_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_FAIL_IF_NEQ(color.green, 0xFF);
    ISHIKO_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_PASS();
}

void ColorTests::ConstructorTest3(Test& test)
{
    Ishiko::Color color(Ishiko::Color::eRed);

    ISHIKO_FAIL_IF_NEQ(color.red, 0xFF);
    ISHIKO_FAIL_IF_NEQ(color.green, 0);
    ISHIKO_FAIL_IF_NEQ(color.blue, 0);
    ISHIKO_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_PASS();
}

void ColorTests::ConstructorTest4(Test& test)
{
    Ishiko::Color color(0, 1, 2);

    ISHIKO_FAIL_IF_NEQ(color.red, 0);
    ISHIKO_FAIL_IF_NEQ(color.green, 1);
    ISHIKO_FAIL_IF_NEQ(color.blue, 2);
    ISHIKO_FAIL_IF_NEQ(color.alpha, 0xFF);
    ISHIKO_PASS();
}
