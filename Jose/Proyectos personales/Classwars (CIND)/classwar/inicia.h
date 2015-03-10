#include <allegro.h>

void init();
void deinit();

BITMAP *fondo_juego;

class inicia()
{
    int x;
    int y;
    *fondo_juego = load_bitmap("fondo_juego.png", NULL);
    draw_sprite(screen, fondo_juego, x, y);
};
