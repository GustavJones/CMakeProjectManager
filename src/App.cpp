#include "App.h"
#include <wx/wx.h>
#include "MainFrame.h"

bool App::OnInit()
{
    MainFrame *mainFrame = new MainFrame("Random Block Placer");
    mainFrame->Show(true);
    return true;
}

wxIMPLEMENT_APP(App);