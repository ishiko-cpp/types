/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "URLTests.h"
#include "Ishiko/Types/URL.h"

using namespace Ishiko;
using namespace Ishiko::Tests;

URLTests::URLTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "URL tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void URLTests::ConstructorTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHTF_FAIL_IF_NEQ(url.str(), "https://ishiko.org");
    ISHTF_PASS();
}
