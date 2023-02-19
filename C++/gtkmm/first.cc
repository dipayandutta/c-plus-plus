#include<gtkmm.h>

class MyWindow : public Gtk::Window{
	public:
		MyWindow();
};

MyWindow::MyWindow(){
	 set_title("basic application");
	 set_default_size(200,200);
	 }

int main(int argc, char * argv[]){
	auto app = Gtk::Application::create("org.gtkmm.example.base");
	return app->make_window_and_run<MyWindow>(argc,argv);
}
