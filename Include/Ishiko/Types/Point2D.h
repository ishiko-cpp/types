/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/Types/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_POINT2D_H_
#define _ISHIKO_TYPES_POINT2D_H_

namespace Ishiko
{

template <class T>
struct Point2D
{
    Point2D(T x, T y);

    T x;
    T y;
};

template <class T>
Point2D<T>::Point2D(T x, T y)
    : x(x), y(y)
{
}

}

#endif
