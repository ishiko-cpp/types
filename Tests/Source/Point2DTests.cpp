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
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", EqualityOperatorTest2);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 2", InequalityOperatorTest2);
}

void Point2DTests::ConstructorTest1(Test& test)
{
    Point2D<int> point{};

    ISHTF_FAIL_IF_NEQ(point.x, 0);
    ISHTF_FAIL_IF_NEQ(point.y, 0);
    ISHTF_PASS();
}

void Point2DTests::ConstructorTest2(Test& test)
{
    Point2D<int> point(1, 2);

    ISHTF_FAIL_IF_NEQ(point.x, 1);
    ISHTF_FAIL_IF_NEQ(point.y, 2);
    ISHTF_PASS();
}

void Point2DTests::EqualityOperatorTest1(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 2);

    bool result = (point1 == point2);

    ISHTF_FAIL_IF_NOT(result);
    ISHTF_PASS();
}

void Point2DTests::EqualityOperatorTest2(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 3);

    bool result = (point1 == point2);

    ISHTF_FAIL_IF(result);
    ISHTF_PASS();
}

void Point2DTests::InequalityOperatorTest1(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 3);

    bool result = (point1 != point2);

    ISHTF_FAIL_IF_NOT(result);
    ISHTF_PASS();
}

void Point2DTests::InequalityOperatorTest2(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 2);

    bool result = (point1 != point2);

    ISHTF_FAIL_IF(result);
    ISHTF_PASS();
}
