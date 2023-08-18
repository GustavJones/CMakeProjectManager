#include "Include.h"

Include::Include(std::string path) : m_path(path) {}

std::string Include::GetPath()
{
    return m_path;
}

void Include::SetPath(std::string path)
{
    m_path = path;
}
