/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "ColorTests.h"
#include "Ishiko/TestFramework/TestFrameworkCore.h"

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoProcess");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ColorTests>();

    return theTestHarness.run();
}
