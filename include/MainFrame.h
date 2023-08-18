#pragma once
#include <wx/wx.h>
#include "FileManage.h"

class MainFrame : public wxFrame
{
private:
    wxSize m_clientSize;

    wxTextCtrl *projName;
    wxTextCtrl *projVersion;
    wxTextCtrl *libName;
    wxTextCtrl *libPath;

    FileManage::File *outputStream;

public:
    MainFrame(const wxString &title);
    wxSize RefreshClientSize();
    void AddLibrary(wxCommandEvent &evt);
};
