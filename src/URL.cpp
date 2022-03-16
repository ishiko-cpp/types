/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/types/blob/main/LICENSE.txt
*/

#include "URL.hpp"

using namespace boost;
using namespace std;

namespace Ishiko
{

URL::URL(const std::string& url)
    : m_url(url)
{
    // TODO : what if malformed
}

string URL::scheme() const
{
    size_t pos = m_url.find(':');
    return string(m_url.begin(), m_url.begin() + pos);
}

optional<string> URL::authority() const
{
    optional<string> result;
    size_t pos1 = m_url.find("//");
    if (pos1 != string::npos)
    {
        pos1 += 2;
        size_t pos2 = m_url.find_first_of("/?#", pos1);
        if (pos2 != string::npos)
        {
            return m_url.substr(pos1, pos2 - pos1);
        }
        else
        {
            return m_url.substr(pos1);
        }
    }
    return result;
}

optional<string> URL::host() const
{
    // TODO: what is user@ in front
    optional<string> result;
    size_t pos1 = m_url.find("//");
    if (pos1 != string::npos)
    {
        pos1 += 2;
        size_t pos2 = m_url.find_first_of(":/?#", pos1);
        if (pos2 != string::npos)
        {
            return m_url.substr(pos1, pos2 - pos1);
        }
        else
        {
            return m_url.substr(pos1);
        }
    }
    return result;
}

string URL::path() const
{
    size_t pos1 = m_url.find("//");
    if (pos1 != string::npos)
    {
        pos1 += 2;
        size_t pos2 = m_url.find_first_of("/?#", pos1);
        if (pos2 != string::npos)
        {
            pos1 = pos2;
        }
        else
        {
            pos1 = m_url.size();
        }
    }
    else
    {
        pos1 = m_url.find(":") + 1;
    }
    size_t pos2 = m_url.find_first_of("?#", pos1);
    if (pos2 != string::npos)
    {
        return m_url.substr(pos1, pos2 - pos1);
    }
    else
    {
        return m_url.substr(pos1);
    }
}

optional<string> URL::query() const
{
    optional<string> result;
    size_t pos1 = m_url.find('?');
    if (pos1 != string::npos)
    {
        size_t pos2 = m_url.find("#", pos1);
        return string(m_url.begin() + pos1 + 1, m_url.begin() + pos2);
    }
    return result;
}

optional<string> URL::fragment() const
{
    optional<string> result;
    size_t pos = m_url.find('?');
    if (pos != string::npos)
    {
        return string(m_url.begin() + pos + 1, m_url.end());
    }
    return result;
}

bool URL::operator==(const std::string& other) const noexcept
{
    return (m_url == other);
}

bool URL::operator!=(const std::string& other) const noexcept
{
    return (m_url != other);
}

const std::string& URL::str() const
{
    return m_url;
}

}
