#include <wx/image.h>
#include "Application.h"
#include "win_main.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	win_main *win = new win_main(NULL);
	win->Show();
	return true;
}

