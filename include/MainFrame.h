#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
private:
    wxSize m_clientSize;

public:
    MainFrame(const wxString &title);
    wxSize RefreshClientSize();
};
