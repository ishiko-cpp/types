/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "ColorTests.h"
#include "Point2DTests.h"
#include "URLTests.h"
#include "Ishiko/Types/linkoptions.h"
#include <Ishiko/Tests/Core.hpp>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTypes");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ColorTests>();
    theTests.append<Point2DTests>();
    theTests.append<URLTests>();

    return theTestHarness.run();
}
