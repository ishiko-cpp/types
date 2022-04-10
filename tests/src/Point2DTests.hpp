/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_TESTS_POINT2DTESTS_HPP_
#define _ISHIKO_CPP_TYPES_TESTS_POINT2DTESTS_HPP_

#include <Ishiko/TestFramework/Core.hpp>

class Point2DTests : public Ishiko::TestSequence
{
public:
    Point2DTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void ConstructorTest3(Ishiko::Test& test);
    static void ConstructorTest4(Ishiko::Test& test);
    static void ConstructorTest5(Ishiko::Test& test);
    static void EqualityOperatorTest1(Ishiko::Test& test);
    static void EqualityOperatorTest2(Ishiko::Test& test);
    static void InequalityOperatorTest1(Ishiko::Test& test);
    static void InequalityOperatorTest2(Ishiko::Test& test);
};

#endif
