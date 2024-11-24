// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#include "RGBAColor.hpp"

using namespace Ishiko;

Color::Color(ColorName color) noexcept
{
    switch (color)
    {
    case ColorName::black:
        red_component = 0;
        green_component = 0;
        blue_component = 0;
        break;

    case ColorName::green:
        red_component = 0;
        green_component = 0xFF;
        blue_component = 0;
        break;

    case ColorName::red:
        red_component = 0xFF;
        green_component = 0;
        blue_component = 0;
        break;
    }
    
    alpha_component = 0xFF;
}

Color::Color(unsigned char red_component, unsigned char green_component, unsigned char blue_component) noexcept
    : red_component(red_component), green_component(green_component), blue_component(blue_component),
    alpha_component(0xFF)
{
}
