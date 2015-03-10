#include <allegro.h>

void init();
void deinit();

BITMAP *fondo_juego;

class inicia
{
    int x;
    int y;
    fondo_juego = load_bitmap("fondo_juego.bmp", NULL);
    draw_sprite(screen, fondo_juego, x, y);
    //poner en la main
};
