/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_POINT2D_HPP_
#define _ISHIKO_CPP_TYPES_POINT2D_HPP_

#include <initializer_list>

namespace Ishiko
{

template <class T>
struct Point2D
{
    Point2D() noexcept = default;
    Point2D(T x, T y) noexcept;
    Point2D(std::initializer_list<T> l) noexcept;

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
Point2D<T>::Point2D(std::initializer_list<T> l) noexcept
    : x(0), y(0)
{
    auto it = l.begin();
    if (it != l.end())
    {
        x = *it;
        ++it;
        if (it != l.end())
        {
            y = *it;
        }
    }
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
