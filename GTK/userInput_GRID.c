#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>

static GtkWidget *FirstNumber;
static GtkWidget *SecondNumber;
static GtkWidget *result;

void do_calculate(GtkWidget *calculate , gpointer data){

	int numberOne = atoi((char *)gtk_entry_get_text(GTK_ENTRY(FirstNumber)));
	int numberTwo = atoi((char *)gtk_entry_get_text(GTK_ENTRY(SecondNumber)));

	printf("First Number : %d\n",numberOne);
	printf("Second Number: %d\n",numberTwo);

	char buffer[32];
	snprintf(buffer,sizeof(buffer),"result : %d",numberOne+numberTwo);

	gtk_label_set_text(GTK_LABEL(result),buffer);
}


int main(int argc , char *argv[]){

	GtkWidget *window,*grid,*calculate;

	gtk_init(&argc, &argv);

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);

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

	gtk_widget_show_all(window);
	gtk_main();

	return 0;
}
