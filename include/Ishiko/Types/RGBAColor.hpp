// SPDX-FileCopyrightText: 2005-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_TYPES_RGBACOLOR_HPP
#define GUARD_ISHIKO_CPP_TYPES_RGBACOLOR_HPP

#include "ColorName.hpp"

namespace Ishiko
{
    struct Color
    {
        Color(ColorName color) noexcept;
        Color(unsigned char red_component, unsigned char green_component, unsigned char blue_component) noexcept;

        unsigned char red_component;
        unsigned char green_component;
        unsigned char blue_component;
        unsigned char alpha_component;
    };
}

#endif
