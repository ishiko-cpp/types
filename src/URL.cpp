/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "URL.hpp"

namespace Ishiko
{

URL::URL(const std::string& url)
    : m_url(url)
{
}

const std::string& URL::str() const
{
    return m_url;
}

}
