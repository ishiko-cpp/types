/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_TESTS_UINT128TESTS_HPP_
#define _ISHIKO_CPP_TYPES_TESTS_UINT128TESTS_HPP_

#include <Ishiko/TestFramework/Core.hpp>

class Uint128Tests : public Ishiko::TestSequence
{
public:
    Uint128Tests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
};

#endif
