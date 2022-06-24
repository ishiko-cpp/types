/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "Uint128Tests.hpp"
#include "Ishiko/Types/Uint128.hpp"

using namespace Ishiko;

Uint128Tests::Uint128Tests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "Uint128 tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void Uint128Tests::ConstructorTest1(Test& test)
{
    Uint128 number;

    ISHIKO_TEST_PASS();
}
