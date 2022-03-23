/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "Point2DTests.hpp"
#include "Ishiko/Types/Point2D.hpp"

using namespace Ishiko;

Point2DTests::Point2DTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Point2D tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
    append<HeapAllocationErrorsTest>("Constructor test 5", ConstructorTest5);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", EqualityOperatorTest2);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 2", InequalityOperatorTest2);
}

void Point2DTests::ConstructorTest1(Test& test)
{
    Point2D<int> point{};

    ISHIKO_TEST_FAIL_IF_NEQ(point.x, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(point.y, 0);
    ISHIKO_TEST_PASS();
}

void Point2DTests::ConstructorTest2(Test& test)
{
    Point2D<int> point(1, 2);

    ISHIKO_TEST_FAIL_IF_NEQ(point.x, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(point.y, 2);
    ISHIKO_TEST_PASS();
}

void Point2DTests::ConstructorTest3(Test& test)
{
    Point2D<int> point({});

    ISHIKO_TEST_FAIL_IF_NEQ(point.x, 0);
    ISHIKO_TEST_FAIL_IF_NEQ(point.y, 0);
    ISHIKO_TEST_PASS();
}

void Point2DTests::ConstructorTest4(Test& test)
{
    Point2D<int> point({ 1 });

    ISHIKO_TEST_FAIL_IF_NEQ(point.x, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(point.y, 0);
    ISHIKO_TEST_PASS();
}

void Point2DTests::ConstructorTest5(Test& test)
{
    Point2D<int> point({ 1, 2 });

    ISHIKO_TEST_FAIL_IF_NEQ(point.x, 1);
    ISHIKO_TEST_FAIL_IF_NEQ(point.y, 2);
    ISHIKO_TEST_PASS();
}

void Point2DTests::EqualityOperatorTest1(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 2);

    bool result = (point1 == point2);

    ISHIKO_TEST_FAIL_IF_NOT(result);
    ISHIKO_TEST_PASS();
}

void Point2DTests::EqualityOperatorTest2(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 3);

    bool result = (point1 == point2);

    ISHIKO_TEST_FAIL_IF(result);
    ISHIKO_TEST_PASS();
}

void Point2DTests::InequalityOperatorTest1(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 3);

    bool result = (point1 != point2);

    ISHIKO_TEST_FAIL_IF_NOT(result);
    ISHIKO_TEST_PASS();
}

void Point2DTests::InequalityOperatorTest2(Test& test)
{
    Point2D<int> point1(1, 2);
    Point2D<int> point2(1, 2);

    bool result = (point1 != point2);

    ISHIKO_TEST_FAIL_IF(result);
    ISHIKO_TEST_PASS();
}
