/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_TYPES_URL_H_
#define _ISHIKO_TYPES_URL_H_

#include <string>

namespace Ishiko
{

class URL
{
public:
    URL(const std::string& url);

    const std::string& str() const;

private:
    std::string m_url;
};

}

#endif
