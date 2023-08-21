#include <gtkmm.h>

class Window : public Gtk::Window {
public:
    Gtk::VBox box;
    Gtk::Entry entry_first_name;
    Gtk::Entry entry_last_name;
    Gtk::Button button;
    Gtk::Label label_first_name;
    Gtk::Label label_last_name;
    Gtk::Label label;

    Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL) {
        this->set_title("Oppgave 2");

        button.set_label("Combine names");
        label_first_name.set_text("First name");
        label_last_name.set_text("Last name");
        label.set_text("Names combined:");

        box.pack_start(label_first_name);
        box.pack_start(entry_first_name);
        box.pack_start(label_last_name);
        box.pack_start(entry_last_name);
        box.pack_start(button);
        box.pack_start(label);
        button.set_sensitive(false);

        add(box);
        show_all();


        entry_first_name.signal_changed().connect([this]() {
            if (entry_first_name.get_text().empty()){
                button.set_sensitive(false);
            }
            else {
                button.set_sensitive(true);
            }
        });

        entry_last_name.signal_changed().connect([this]() {
            if (entry_last_name.get_text().empty()){
                button.set_sensitive(false);
            }
            else {
                button.set_sensitive(true);
            }
        });

        button.signal_clicked().connect([this]() {
            label.set_text(entry_first_name.get_text() + " " + entry_last_name.get_text());
        });
    }
};

int main() {
    auto app = Gtk::Application::create();
    Window window;
    return app->run(window);
}
