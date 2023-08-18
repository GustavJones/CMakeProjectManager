#include "Library.h"

Library::Library(wxString name, wxString path)
    : m_name(name), m_path(path)
{
}

wxString Library::GetName()
{
    return m_name;
}

wxString Library::GetPath()
{
    return m_path;
}

void Library::SetName(wxString name)
{
    m_name = name;
}

void Library::SetPath(wxString path)
{
    m_path = path;
}
