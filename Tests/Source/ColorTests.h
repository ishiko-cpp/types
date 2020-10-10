/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_TEST_COLORTESTS_H_
#define _ISHIKO_TYPES_TEST_COLORTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"

class ColorTests : public Ishiko::Tests::TestSequence
{
public:
    ColorTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ConstructorTest2(Ishiko::Tests::Test& test);
    static void ConstructorTest3(Ishiko::Tests::Test& test);
    static void ConstructorTest4(Ishiko::Tests::Test& test);
};

#endif
