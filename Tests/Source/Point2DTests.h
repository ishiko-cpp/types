/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_TESTS_POINT2DTESTS_H_
#define _ISHIKO_TYPES_TESTS_POINT2DTESTS_H_

#include "Ishiko/TestFramework/TestFrameworkCore.h"

class Point2DTests : public Ishiko::Tests::TestSequence
{
public:
    Point2DTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif
