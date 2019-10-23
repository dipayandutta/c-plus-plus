#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>


static GtkWidget *FirstNumber;
static GtkWidget *SecondNumber;
static GtkWidget *result;


void do_calculate(GtkWidget *calculate , gpointer data){

	int numberOne = atoi((char *)gtk_entry_get_text(GTK_ENTRY(FirstNumber)));
	int numberTwo = atoi((char *)gtk_entry_get_text(GTK_ENTRY(SecondNumber)));

	char buffer[23];
	snprintf(buffer,sizeof(buffer),"Result: %d",numberOne + numberTwo);

	gtk_label_set_text(GTK_LABEL(result),buffer);
}

int main(int argc , char *argv[]){

	GtkWidget *window;
	GtkWidget *vbox;

	GtkWidget *menubar;
	GtkWidget *fileMenu;
	GtkWidget *fileMi;
	GtkWidget *quitMi;

	GtkWidget *grid;
	GtkWidget *calculate;

	gtk_init(&argc , &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Simple Addition Calculator");
	gtk_window_set_default_size(GTK_WINDOW(window),300,200);
	gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);

/*
	vbox = gtk_vbox_new(FALSE,0);
	gtk_container_add(GTK_CONTAINER(window),vbox);

	menubar 	= gtk_menu_bar_new();
	fileMenu	= gtk_menu_new();

	fileMi		= gtk_menu_item_new_with_label("File");
	quitMi		= gtk_menu_item_new_with_label("Quit");
*/
	grid = gtk_grid_new();
	gtk_container_add(GTK_CONTAINER(window),grid);

	FirstNumber = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid),FirstNumber,0,0,1,1);

	SecondNumber = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid),SecondNumber,1,0,1,1);

	calculate = gtk_button_new_with_label("calculate");
	g_signal_connect(calculate,"clicked",G_CALLBACK(do_calculate),NULL);
	gtk_grid_attach(GTK_GRID(grid),calculate,2,0,1,1);

	result = gtk_label_new("result");
	gtk_grid_attach(GTK_GRID(grid),result,1,1,1,1);
	
/*gtk_menu_item_set_submenu(GTK_MENU_ITEM(fileMi),fileMenu);
	gtk_menu_shell_append(GTK_MENU_SHELL(fileMi),quitMi);
	gtk_menu_shell_append(GTK_MENU_SHELL(menubar),fileMi);
	gtk_box_pack_start(GTK_BOX(vbox),menubar,FALSE,FALSE,0);
*/

	g_signal_connect(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit),NULL);
	g_signal_connect(G_OBJECT(quitMi),"active",G_CALLBACK(gtk_main_quit),NULL);

	gtk_widget_show_all(window);
	
	gtk_main();

	return 0;
}
