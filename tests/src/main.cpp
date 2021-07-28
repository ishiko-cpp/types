/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "ColorTests.h"
#include "Point2DTests.h"
#include <Ishiko/Tests/Core.h>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTypes");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ColorTests>();
    theTests.append<Point2DTests>();

    return theTestHarness.run();
}
