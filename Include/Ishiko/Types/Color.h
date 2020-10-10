/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_COLOR_H_
#define _ISHIKO_TYPES_COLOR_H_

namespace Ishiko
{

class Color
{
public:
    Color(unsigned char red, unsigned char green, unsigned char blue);

    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
};

}

#include "linkoptions.h"

#endif
