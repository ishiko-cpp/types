/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_TESTS_POINT2DTESTS_H_
#define _ISHIKO_TYPES_TESTS_POINT2DTESTS_H_

#include <Ishiko/Tests/Core.hpp>

class Point2DTests : public Ishiko::Tests::TestSequence
{
public:
    Point2DTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ConstructorTest2(Ishiko::Tests::Test& test);
    static void ConstructorTest3(Ishiko::Tests::Test& test);
    static void ConstructorTest4(Ishiko::Tests::Test& test);
    static void ConstructorTest5(Ishiko::Tests::Test& test);
    static void EqualityOperatorTest1(Ishiko::Tests::Test& test);
    static void EqualityOperatorTest2(Ishiko::Tests::Test& test);
    static void InequalityOperatorTest1(Ishiko::Tests::Test& test);
    static void InequalityOperatorTest2(Ishiko::Tests::Test& test);
};

#endif
