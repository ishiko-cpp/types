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
    Point2D() noexcept = default;
    Point2D(T x, T y) noexcept;

    bool operator==(const Point2D& other) const noexcept;
    bool operator!=(const Point2D& other) const noexcept;

    T x;
    T y;
};

template <class T>
Point2D<T>::Point2D(T x, T y) noexcept
    : x(x), y(y)
{
}

template <class T>
bool Point2D<T>::operator==(const Point2D& other) const noexcept
{
    return ((x == other.x) && (y == other.y));
}

template <class T>
bool Point2D<T>::operator!=(const Point2D& other) const noexcept
{
    return ((x != other.x) || (y != other.y));
}

}

#endif
