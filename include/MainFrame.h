#pragma once
#include <wx/wx.h>
#include "FileManage.h"

class MainFrame : public wxFrame
{
private:
    wxSize m_clientSize;

    wxTextCtrl *projName;
    wxTextCtrl *projVersion;
    wxTextCtrl *includePath;
    wxTextCtrl *libName;
    wxTextCtrl *libPath;

    FileManage::File *outputFile;
    wxDirDialog *openDirDialog;

public:
    MainFrame(const wxString &title);
    wxSize RefreshClientSize();
    void OpenDir(wxCommandEvent &evt);
    void AddProject(wxCommandEvent &evt);
    void AddInclude(wxCommandEvent &evt);
    void AddLibrary(wxCommandEvent &evt);

    ~MainFrame();
};
