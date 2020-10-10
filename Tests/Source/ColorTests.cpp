/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "ColorTests.h"
#include "Ishiko/Types/Color.h"

using namespace Ishiko::Tests;

ColorTests::ColorTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "Color tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void ColorTests::ConstructorTest1(Test& test)
{
    Ishiko::Color color;

    ISHTF_PASS();
}