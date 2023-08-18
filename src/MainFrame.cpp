#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
    const unsigned int spacerSize = 5;

    RefreshClientSize();
    this->SetBackgroundColour(wxColour(255, 255, 255));

    // Fonts
    wxFont titleFont = wxFont(30, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
    wxFont subFont = wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
    wxFont normalFont = wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

    // Sizers
    wxBoxSizer *mainSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *inputOutputSizer = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer *inputSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *outputSizer = new wxBoxSizer(wxVERTICAL);

    // Frame Controls
    wxPanel *inputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);
    wxPanel *outputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);

    wxStaticText *titleText = new wxStaticText(this, wxID_ANY, "CMake Project Manager");

    // Input Controls
    wxStaticText *projText = new wxStaticText(inputPanel, wxID_ANY, "Project Details");
    projName = new wxTextCtrl(inputPanel, wxID_ANY);
    projVersion = new wxTextCtrl(inputPanel, wxID_ANY);
    wxStaticText *libText = new wxStaticText(inputPanel, wxID_ANY, "Add a library");
    libName = new wxTextCtrl(inputPanel, wxID_ANY);
    libPath = new wxTextCtrl(inputPanel, wxID_ANY);
    wxButton *libButton = new wxButton(inputPanel, wxID_ANY, "Add Library");

    // Controls Properties Edit
    titleText->SetFont(titleFont);

    projText->SetFont(subFont);
    projName->SetHint("Project Name: ");
    projVersion->SetHint("Project Version: ");
    projName->SetFont(normalFont);
    projVersion->SetFont(normalFont);

    libText->SetFont(subFont);
    libName->SetHint("Library Name");
    libPath->SetHint("Path to Library");
    libName->SetFont(normalFont);
    libPath->SetFont(normalFont);
    libButton->SetFont(subFont);

    libButton->Bind(wxEVT_BUTTON, &AddLibrary, this);

    inputPanel->SetSizer(inputSizer);
    outputPanel->SetSizer(outputSizer);

    // Input Output Panels
    inputOutputSizer->Add(inputPanel, 1, wxEXPAND | wxALL, 5);
    inputOutputSizer->Add(outputPanel, 1, wxEXPAND | wxALL, 5);

    // Input Panel
    inputSizer->Add(projText, 0.2, wxEXPAND | wxALL, 10);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(projName, 0, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(projVersion, 0, wxEXPAND | wxLEFT | wxRIGHT, 30);

    inputSizer->Add(libText, 0.2, wxEXPAND | wxALL, 10);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libName, 0, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libPath, 0, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libButton, 0, wxALIGN_CENTER_HORIZONTAL);

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

void MainFrame::AddLibrary(wxCommandEvent &evt)
{
    wxMessageBox("Test!");
}
