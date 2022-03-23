/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "URLTests.hpp"
#include "Ishiko/Types/URL.hpp"

using namespace Ishiko;

URLTests::URLTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "URL tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("scheme test 1", SchemeTest1);
    append<HeapAllocationErrorsTest>("authority test 1", AuthorityTest1);
    append<HeapAllocationErrorsTest>("host test 1", HostTest1);
    append<HeapAllocationErrorsTest>("path test 1", PathTest1);
    append<HeapAllocationErrorsTest>("path test 2", PathTest2);
    append<HeapAllocationErrorsTest>("path test 3", PathTest3);
    append<HeapAllocationErrorsTest>("query test 1", QueryTest1);
    append<HeapAllocationErrorsTest>("fragment test 1", FragmentTest1);
    append<HeapAllocationErrorsTest>("operator== test 1", EqualityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", EqualityOperatorTest2);
    append<HeapAllocationErrorsTest>("operator!= test 1", InequalityOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 2", InequalityOperatorTest2);
}

void URLTests::ConstructorTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_FAIL_IF_NEQ(url.str(), "https://ishiko.org");
    ISHIKO_TEST_PASS();
}

void URLTests::SchemeTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_FAIL_IF_NEQ(url.scheme(), "https");
    ISHIKO_TEST_PASS();
}

void URLTests::AuthorityTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_ABORT_IF_NOT(url.authority().has_value());
    ISHIKO_TEST_FAIL_IF_NEQ(url.authority().value(), "ishiko.org");
    ISHIKO_TEST_PASS();
}

void URLTests::HostTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_ABORT_IF_NOT(url.host().has_value());
    ISHIKO_TEST_FAIL_IF_NEQ(url.host().value(), "ishiko.org");
    ISHIKO_TEST_PASS();
}

void URLTests::PathTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_FAIL_IF_NEQ(url.path(), "");
    ISHIKO_TEST_PASS();
}

void URLTests::PathTest2(Test& test)
{
    URL url("https://ishiko.org/");

    ISHIKO_TEST_FAIL_IF_NEQ(url.path(), "/");
    ISHIKO_TEST_PASS();
}

void URLTests::PathTest3(Test& test)
{
    URL url("https://ishiko.org/index.html");

    ISHIKO_TEST_FAIL_IF_NEQ(url.path(), "/index.html");
    ISHIKO_TEST_PASS();
}

void URLTests::QueryTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_ABORT_IF(url.query().has_value());
    ISHIKO_TEST_PASS();
}

void URLTests::FragmentTest1(Test& test)
{
    URL url("https://ishiko.org");

    ISHIKO_TEST_ABORT_IF(url.fragment().has_value());
    ISHIKO_TEST_PASS();
}

void URLTests::EqualityOperatorTest1(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url == "https://ishiko.org");

    ISHIKO_TEST_FAIL_IF_NOT(result);
    ISHIKO_TEST_PASS();
}

void URLTests::EqualityOperatorTest2(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url == "wrong");

    ISHIKO_TEST_FAIL_IF(result);
    ISHIKO_TEST_PASS();
}

void URLTests::InequalityOperatorTest1(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url != "wrong");

    ISHIKO_TEST_FAIL_IF_NOT(result);
    ISHIKO_TEST_PASS();
}

void URLTests::InequalityOperatorTest2(Test& test)
{
    URL url("https://ishiko.org");

    bool result = (url != "https://ishiko.org");

    ISHIKO_TEST_FAIL_IF(result);
    ISHIKO_TEST_PASS();
}
