#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <iostream>
using namespace std;
int main() {
	al_init();
	al_init_image_addon();
	ALLEGRO_DISPLAY*display = NULL;
	ALLEGRO_BITMAP*icon = NULL;
	cout << "flag1" << endl;
	display = al_create_display(640, 480);
	icon = al_load_bitmap("doom.jpg");
	if (icon == NULL)
		cout << "errrr." << endl;
	cout << "flag2" << endl;
	al_set_window_title(display, "I have no idea what to call this.");
	cout << "flag3" << endl;
	al_set_display_icon(display, icon);
	cout << "flag4" << endl;
	al_rest(5.0);
	al_destroy_display(display);
}