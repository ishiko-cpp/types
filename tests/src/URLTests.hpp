/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_TESTS_URLTESTS_HPP_
#define _ISHIKO_CPP_TYPES_TESTS_URLTESTS_HPP_

#include <Ishiko/Tests/Core.hpp>

class URLTests : public Ishiko::TestSequence
{
public:
    URLTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void SchemeTest1(Ishiko::Test& test);
    static void AuthorityTest1(Ishiko::Test& test);
    static void HostTest1(Ishiko::Test& test);
    static void PathTest1(Ishiko::Test& test);
    static void PathTest2(Ishiko::Test& test);
    static void PathTest3(Ishiko::Test& test);
    static void QueryTest1(Ishiko::Test& test);
    static void FragmentTest1(Ishiko::Test& test);
    static void EqualityOperatorTest1(Ishiko::Test& test);
    static void EqualityOperatorTest2(Ishiko::Test& test);
    static void InequalityOperatorTest1(Ishiko::Test& test);
    static void InequalityOperatorTest2(Ishiko::Test& test);
};

#endif
