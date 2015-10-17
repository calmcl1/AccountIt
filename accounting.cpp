#include "config.h"
#include "constants.h"

#include "invoice.h"
#include "entry.h"
#include "transaction.h"
#include "account.h"
#include "job.h"
#include "receipt.h"
#include "merchant.h"

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

/*class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

class MyFrame: public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("Hello World", wxPoint(50,50), wxSize(450,340));
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(NULL, wxID_ANY,title,pos,size)
{
    CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );
    printf("Frame created");
}*/

int main()
{
    Entry e1;
    return 0;
}
