#include <gtk/gtk.h>

// Function declarations
void on_button_click(GtkButton *button, gpointer user_data);
void on_clear_click(GtkButton *button, gpointer user_data);
void on_equal_click(GtkButton *button, gpointer user_data);

// Global variables
GtkWidget *entry;

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

    // Create the entry widget
    entry = gtk_entry_new();
    gtk_entry_set_alignment(GTK_ENTRY(entry), 1.0);
    gtk_entry_set_width_chars(GTK_ENTRY(entry), 20);
    gtk_entry_set_editable(GTK_ENTRY(entry), FALSE);

    // Create the grid for buttons
    GtkWidget *grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 5);

    // Array of button labels
    const gchar *button_labels[] = {
        "7", "8", "9", "/",
        "4", "5", "6", "*",
        "1", "2", "3", "-",
        "0", ".", "=", "+"
    };

    // Attach buttons to the grid
    for (int i = 0; i < 16; i++) {
        GtkWidget *button = gtk_button_new_with_label(button_labels[i]);
        g_signal_connect(button, "clicked", G_CALLBACK(on_button_click), entry);

        gtk_grid_attach(GTK_GRID(grid), button, i % 4, i / 4, 1, 1);
    }

    // Connect the equal button to its own handler
    GtkWidget *equal_button = gtk_button_new_with_label("=");
    g_signal_connect(equal_button, "clicked", G_CALLBACK(on_equal_click), entry);
    gtk_grid_attach(GTK_GRID(grid), equal_button, 2, 4, 1, 2);

    // Connect the clear button to its own handler
    GtkWidget *clear_button = gtk_button_new_with_label("C");
    g_signal_connect(clear_button, "clicked", G_CALLBACK(on_clear_click), entry);
    gtk_grid_attach(GTK_GRID(grid), clear_button, 3, 4, 1, 2);

    // Create a vertical box to hold the entry and grid
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(box), entry, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(box), grid, TRUE, TRUE, 0);

    // Add the box to the main window
    gtk_container_add(GTK_CONTAINER(window), box);

    // Set up signal handlers
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Show all the widgets
    gtk_widget_show_all(window);

    // Run the GTK main loop
    gtk_main();

    return 0;
}

// Handler for numeric and operation buttons
void on_button_click(GtkButton *button, gpointer user_data) {
    const gchar *button_label = gtk_button_get_label(button);
    gchar *current_text = g_strdup(gtk_entry_get_text(GTK_ENTRY(user_data)));
    gchar *new_text = g_strconcat(current_text, button_label, NULL);

    gtk_entry_set_text(GTK_ENTRY(user_data), new_text);

    g_free(current_text);
    g_free(new_text);
}

// Handler for the "=" button
void on_equal_click(GtkButton *button, gpointer user_data) {
    const gchar *expression = gtk_entry_get_text(GTK_ENTRY(user_data));

    // Use a simple method to evaluate the expression
    gchar *result_text = g_strdup_printf("= %g", eval_expression(expression));

    gtk_entry_set_text(GTK_ENTRY(user_data), result_text);

    g_free(result_text);
}

// Handler for the "C" button (clear)
void on_clear_click(GtkButton *button, gpointer user_data) {
    gtk_entry_set_text(GTK_ENTRY(user_data), "");
}

// Function to evaluate a simple arithmetic expression
double eval_expression(const gchar *expression) {
    // Implement your own expression evaluation logic here
    // For simplicity, this example uses the g_ascii_strtod function
    GError *error = NULL;
    double result = g_ascii_strtod(expression, &error);

    if (error != NULL) {
        g_error_free(error);
        return 0.0;  // Return 0 in case of an error
    }

    return result;
}

