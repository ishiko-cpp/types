// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "RGBAColorTests.hpp"
#include "Point2DTests.hpp"
#include "Uint128Tests.hpp"
#include "URLTests.hpp"
#include "Ishiko/Types/linkoptions.hpp"
#include <Ishiko/TestFramework/Core.hpp>

using namespace Ishiko;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoTypes");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<RGBAColorTests>();
    theTests.append<Point2DTests>();
    theTests.append<Uint128Tests>();
    theTests.append<URLTests>();

    return theTestHarness.run();
}
