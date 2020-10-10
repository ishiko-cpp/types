/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#include "Color.h"

namespace Ishiko
{

Color::Color(unsigned char red, unsigned char green, unsigned char blue)
    : red(red), green(green), blue(blue), alpha(0xFF)
{
}

}
