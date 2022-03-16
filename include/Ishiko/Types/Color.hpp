/*
    Copyright (c) 2020-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_COLOR_HPP_
#define _ISHIKO_CPP_TYPES_COLOR_HPP_

namespace Ishiko
{

struct Color
{
    enum EColor
    {
        eBlack,
        eGreen,
        eRed
    };

    Color(EColor color) noexcept;
    Color(unsigned char red, unsigned char green, unsigned char blue) noexcept;

    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

}

#endif
