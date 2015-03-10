#include <allegro.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void init();
void deinit();

int numero = 0;
bool veces = false;

BITMAP *uno;
BITMAP *dos;
BITMAP *tres;
BITMAP *cuatro;
BITMAP *cinco;
BITMAP *seis;
BITMAP *siete;

int main() {
	init();
    
    srand(time(NULL));
	while (!key[KEY_ESC])
	{
          //Cargamos las imágenes en los bitmaps
          uno = load_bitmap("uno.bmp", NULL);
          dos = load_bitmap("dos.bmp", NULL);
          tres = load_bitmap("tres.bmp", NULL);
          cuatro = load_bitmap("cuatro.bmp", NULL);
          cinco = load_bitmap("cinco.bmp", NULL);
          seis = load_bitmap("seis.bmp", NULL);
          siete = load_bitmap("siete.bmp", NULL);
          
          if(!veces)
          {
                   numero = 1+rand()%7; //Elegimos el que va a salir
		           switch(numero) //Dibujamos el emoticono
		           {
                                 case 1:
                                 {
                                      draw_sprite(screen, uno, 0, 0);
                                      break;
                                 }
                                 case 2:
                                 {
                                      draw_sprite(screen, dos, 0, 0);
                                      break;
                                 }
                                 case 3:
                                 {
                                      draw_sprite(screen, tres, 0, 0);
                                      break;
                                 }
                                 case 4:
                                 {
                                      draw_sprite(screen, cuatro, 0, 0);
                                      break;
                                 }
                                 case 5:
                                 {
                                      draw_sprite(screen, cinco, 0, 0);
                                      break;
                                 }
                                 case 6:
                                 {
                                      draw_sprite(screen, seis, 0, 0);
                                      break;
                                 }
                                 case 7:
                                 {
                                      draw_sprite(screen, siete, 0, 0);
                                      break;
                                 }             
                    }
                    veces = true;
		
        }
	}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 200, 200, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
