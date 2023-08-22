#include "MainFrame.h"
#include "File.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
    const unsigned int spacerSize = 10;

    outputFile = new FileManage::File("output/CMakeLists.txt");
    // outputFile->Delete();

    RefreshClientSize();
    this->SetBackgroundColour(wxColour(255, 255, 255));

    // Fonts
    wxFont titleFont = wxFont(32, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
    wxFont subFont = wxFont(17, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, true);
    wxFont normalFont = wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

    // Sizers
    wxBoxSizer *mainSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *inputOutputSizer = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer *inputSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer *outputSizer = new wxBoxSizer(wxVERTICAL);

    // Frame Controls
    wxPanel *inputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);
    // wxPanel *outputPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxBORDER_RAISED);

    wxStaticText *titleText = new wxStaticText(this, wxID_ANY, "CMake Project Manager");

    // Input Controls
    wxStaticText *projText = new wxStaticText(inputPanel, wxID_ANY, "Project Details");
    projName = new wxTextCtrl(inputPanel, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
    projVersion = new wxTextCtrl(inputPanel, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
    wxButton *projButton = new wxButton(inputPanel, wxID_ANY, "Add Project to File");

    wxStaticText *includeText = new wxStaticText(inputPanel, wxID_ANY, "Add an include library");
    includePath = new wxTextCtrl(inputPanel, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
    wxButton *includeButton = new wxButton(inputPanel, wxID_ANY, "Add Include Path");

    wxStaticText *libText = new wxStaticText(inputPanel, wxID_ANY, "Add a library");
    libName = new wxTextCtrl(inputPanel, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
    libPath = new wxTextCtrl(inputPanel, wxID_ANY, "", wxDefaultPosition, wxDefaultSize, wxTE_CENTRE);
    wxButton *libButton = new wxButton(inputPanel, wxID_ANY, "Add Library");

    // Controls Properties Edit
    inputPanel->SetBackgroundColour(wxColour(240, 240, 240));
    // outputPanel->SetBackgroundColour(wxColour(240, 240, 240));

    titleText->SetFont(titleFont);

    projText->SetFont(subFont);
    projName->SetHint("Project Name: ");
    projVersion->SetHint("Project Version: ");
    projName->SetFont(normalFont);
    projVersion->SetFont(normalFont);
    projButton->SetFont(subFont);

    projButton->Bind(wxEVT_BUTTON, &AddProject, this);

    includePath->SetHint("Include Path");
    includeText->SetFont(subFont);
    includePath->SetFont(normalFont);
    includeButton->SetFont(subFont);

    includeButton->Bind(wxEVT_BUTTON, &AddInclude, this);

    libText->SetFont(subFont);
    libName->SetHint("Library Name");
    libPath->SetHint("Path to Library");
    libName->SetFont(normalFont);
    libPath->SetFont(normalFont);
    libButton->SetFont(subFont);

    libButton->Bind(wxEVT_BUTTON, &AddLibrary, this);

    inputPanel->SetSizer(inputSizer);
    // outputPanel->SetSizer(outputSizer);

    // Input Output Panels
    inputOutputSizer->Add(inputPanel, 1, wxEXPAND | wxALL, 10);
    // inputOutputSizer->Add(outputPanel, 1, wxEXPAND | wxALL, 10);

    // Input Panel
    inputSizer->Add(projText, 0.2, wxEXPAND | wxALL, 10);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(projName, 1, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(projVersion, 1, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->Add(projButton, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 20);

    inputSizer->Add(includeText, 0.2, wxEXPAND | wxALL, 10);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(includePath, 1, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(includeButton, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 20);

    inputSizer->Add(libText, 0.2, wxEXPAND | wxALL, 10);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libName, 1, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libPath, 1, wxEXPAND | wxLEFT | wxRIGHT, 30);
    inputSizer->AddSpacer(spacerSize);
    inputSizer->Add(libButton, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 20);

    // Main Frame
    mainSizer->Add(titleText, 1, wxALIGN_CENTER | wxALL, 5);
    mainSizer->Add(inputOutputSizer, 10, wxEXPAND);

    // Frame Setup
    titleText->SetFocus();
    this->SetSizerAndFit(mainSizer);
    this->SetClientSize(1000, 800);
}

wxSize MainFrame::RefreshClientSize()
{
    m_clientSize = this->GetClientSize();
    return m_clientSize;
}

void MainFrame::AddProject(wxCommandEvent &evt)
{
    outputFile->Create();

    std::string fileRead = outputFile->ReadFile();

    std::string name = (std::string)projName->GetValue();
    std::string version = (std::string)projVersion->GetValue();

    if (name != "" && version != "")
    {
        if (outputFile->ReadFile() == "")
        {
            File::addProject(*outputFile, Project(name, version));
        }
        else
        {
            wxMessageBox("Not an empty file!", "Warning!", wxICON_ERROR);
        }
    }
    else
    {
        wxMessageBox("Enter Project information", "Warning!", wxICON_ERROR);
        projName->SetFocus();
    }
}

void MainFrame::AddInclude(wxCommandEvent &evt)
{
    outputFile->Create();

    std::string path = (std::string)includePath->GetValue();

    if (path != "")
    {
        if (outputFile->ReadFile() != "")
        {
            File::addInclude(*outputFile, Include(path));
        }
        else
        {
            wxMessageBox("Add Project Info First", "Warning!", wxICON_ERROR);
        }
    }
    else
    {
        wxMessageBox("Enter Include information", "Warning!", wxICON_ERROR);
        includePath->SetFocus();
    }
}

void MainFrame::AddLibrary(wxCommandEvent &evt)
{
    outputFile->Create();

    std::string name = (std::string)libName->GetValue();
    std::string path = (std::string)libPath->GetValue();

    if (name != "" && path != "")
    {
        if (outputFile->ReadFile() != "")
        {
            File::addLibrary(*outputFile, Library(name, path));
        }
        else
        {
            wxMessageBox("Add Project Info First", "Warning!", wxICON_ERROR);
        }
    }
    else
    {
        wxMessageBox("Enter Library information", "Warning!", wxICON_ERROR);
        libName->SetFocus();
    }
}

MainFrame::~MainFrame()
{
    delete outputFile;
}
