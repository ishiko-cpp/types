// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_TYPES_TESTS_RGBACOLORTESTS_HPP
#define GUARD_ISHIKO_CPP_TYPES_TESTS_RGBACOLORTESTS_HPP

#include <Ishiko/TestFramework/Core.hpp>

class RGBAColorTests : public Ishiko::TestSequence
{
public:
    RGBAColorTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void ConstructorTest3(Ishiko::Test& test);
    static void ConstructorTest4(Ishiko::Test& test);
};

#endif
