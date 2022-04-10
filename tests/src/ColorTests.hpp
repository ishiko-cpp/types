/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_TESTS_COLORTESTS_HPP_
#define _ISHIKO_CPP_TYPES_TESTS_COLORTESTS_HPP_

#include <Ishiko/TestFramework/Core.hpp>

class ColorTests : public Ishiko::TestSequence
{
public:
    ColorTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void ConstructorTest3(Ishiko::Test& test);
    static void ConstructorTest4(Ishiko::Test& test);
};

#endif
