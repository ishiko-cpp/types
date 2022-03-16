/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "URLTests.hpp"
#include "Ishiko/Types/URL.hpp"

using namespace Ishiko;
using namespace Ishiko::Tests;

URLTests::URLTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "URL tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", EqualityOperatorTest2);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 2", InequalityOperatorTest2);
}

void URLTests::ConstructorTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_FAIL_IF_NEQ(url.str(), "https://ishiko.org");
    ISHIKO_PASS();
}

void URLTests::EqualityOperatorTest1(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url == "https://ishiko.org");

    ISHIKO_FAIL_IF_NOT(result);
    ISHIKO_PASS();
}

void URLTests::EqualityOperatorTest2(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url == "wrong");

    ISHIKO_FAIL_IF(result);
    ISHIKO_PASS();
}

void URLTests::InequalityOperatorTest1(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url != "wrong");

    ISHIKO_FAIL_IF_NOT(result);
    ISHIKO_PASS();
}

void URLTests::InequalityOperatorTest2(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url != "https://ishiko.org");

    ISHIKO_FAIL_IF(result);
    ISHIKO_PASS();
}
