/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "ColorTests.hpp"
#include "Point2DTests.hpp"
#include "URLTests.hpp"
#include "Ishiko/Types/linkoptions.hpp"
#include <Ishiko/Tests/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTypes");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<ColorTests>();
    theTests.append<Point2DTests>();
    theTests.append<URLTests>();

    return theTestHarness.run();
}
