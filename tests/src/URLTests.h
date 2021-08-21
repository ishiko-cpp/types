/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_TESTS_URLTESTS_H_
#define _ISHIKO_TYPES_TESTS_URLTESTS_H_

#include <Ishiko/Tests/Core.h>

class URLTests : public Ishiko::Tests::TestSequence
{
public:
    URLTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif