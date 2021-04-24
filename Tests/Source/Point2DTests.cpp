/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "Point2DTests.h"
#include "Ishiko/Types/Point2D.h"

using namespace Ishiko;
using namespace Ishiko::Tests;

Point2DTests::Point2DTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "Point2D tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void Point2DTests::ConstructorTest1(Test& test)
{
    Point2D<int> point(1, 2);

    ISHTF_FAIL_IF_NEQ(point.x, 1);
    ISHTF_FAIL_IF_NEQ(point.y, 2);
    ISHTF_PASS();
}
