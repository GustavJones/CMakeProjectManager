#pragma once
#include <wx/wx.h>

class Library
{
private:
    wxString m_name;
    wxString m_path;

public:
    Library(wxString name, wxString path);

    wxString GetName();
    wxString GetPath();

    void SetName(wxString name);
    void SetPath(wxString path);
};