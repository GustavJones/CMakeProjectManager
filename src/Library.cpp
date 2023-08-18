#include "Library.h"

Library::Library(std::string name, std::string path)
    : m_name(name), m_path(path)
{
}

std::string Library::GetName()
{
    return m_name;
}

std::string Library::GetPath()
{
    return m_path;
}

void Library::SetName(std::string name)
{
    m_name = name;
}

void Library::SetPath(std::string path)
{
    m_path = path;
}
