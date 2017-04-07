#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <iostream>
using namespace std;
int main() {
	al_init();
	al_init_image_addon();
	ALLEGRO_DISPLAY*display = NULL;
	ALLEGRO_BITMAP*icon = NULL;
	display = al_create_display(640, 480);
	icon = al_load_bitmap("doom.jpg");
	al_set_window_title(display, "I have no idea what to call this.");
	al_set_display_icon(display, icon);
	al_rest(5.0);
	al_destroy_display(display);
}