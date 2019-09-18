#include "main.h"
#include "first.h"

IMPLEMENT_APP (MyApp)

bool MyApp::OnInit(){
	Simple *simple = new Simple(wxT("simple"));
	simple->Show(true);

	return true;
}
