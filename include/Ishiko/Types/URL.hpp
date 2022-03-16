/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_TYPES_URL_HPP_
#define _ISHIKO_CPP_TYPES_URL_HPP_

#include <string>

namespace Ishiko
{

class URL
{
public:
    URL(const std::string& url);

    bool operator==(const std::string& other) const noexcept;
    bool operator!=(const std::string& other) const noexcept;

    const std::string& str() const;

private:
    std::string m_url;
};

}

#endif
