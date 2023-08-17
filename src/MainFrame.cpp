#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
    RefreshClientSize();
    this->SetBackgroundColour(wxColour(255, 255, 255));

    // Sizers
    wxBoxSizer *mainSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *inputOutputSizer = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer *inputSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *outputSizer = new wxBoxSizer(wxVERTICAL);

    // Frame Controls
    wxPanel *inputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);
    wxPanel *outputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);

    wxStaticText *titleText = new wxStaticText(this, wxID_ANY, "CMake Project Creator & Editor");
    wxStaticText *inputProjText = new wxStaticText(inputPanel, wxID_ANY, "Project Details");

    wxTextCtrl *projName = new wxTextCtrl(inputPanel, wxID_ANY);
    wxTextCtrl *projVersion = new wxTextCtrl(inputPanel, wxID_ANY);

    // Controls Properties Edit
    titleText->SetFont(wxFont(30, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, true));
    inputProjText->SetFont(wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL));
    projName->SetHint("Project Name: ");
    projVersion->SetHint("Project Version: ");
    inputPanel->SetSizer(inputSizer);
    outputPanel->SetSizer(outputSizer);

    // Input Output Panels
    inputOutputSizer->Add(inputPanel, 1, wxEXPAND | wxALL, 5);
    inputOutputSizer->Add(outputPanel, 1, wxEXPAND | wxALL, 5);

    // Input Panel
    inputSizer->Add(inputProjText, 0.2, wxEXPAND | wxALL, 5);
    inputSizer->Add(projName, 1, wxEXPAND | wxALL, 5);
    inputSizer->Add(projVersion, 1, wxEXPAND | wxALL, 5);

    // Main Frame
    mainSizer->Add(titleText, 1, wxALIGN_CENTER | wxALL, 5);
    mainSizer->Add(inputOutputSizer, 10, wxEXPAND);

    // Frame Setup
    this->SetSizerAndFit(mainSizer);
    this->SetClientSize(800, 600);
}

wxSize MainFrame::RefreshClientSize()
{
    m_clientSize = this->GetClientSize();
    return m_clientSize;
}
