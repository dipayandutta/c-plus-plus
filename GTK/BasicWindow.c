# include <gtk/gtk.h>

int main(int argc , char *argv[]){

	GtkWidget * window; /*GtkWidget is the base class that all widgets in GTK+ derive from, It manages the widgets lifecycles,updates and style.*/
	gtk_init (&argc , &argv);

	/*gtk_window_new() function will creates a new GtkWindow, which is a toplevel window that can contain other widgets*/
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	/*Display The window*/
	gtk_widget_show(window); 
	/*function and signal to quit the window*/
	g_signal_connect(window, "destroy",G_CALLBACK(gtk_main_quit),NULL);
	/*enter into the GTK main loop*/
	gtk_main();

	return 0;
}
