#include <allegro.h>
#include <vector>
#include "class_bala.h"
#include "class_personaje.h"

using namespace std;

void init();
void crea_met();
void deinit();
void corred();
void correi();
void quieto();
void dbala();
void dladrillo();
void mbalas();
void mladrillos();
void mmets();

bool megaman_dentro(int x, int y);
bool suelo = false;
bool metpantalla = false;
bool left;
bool foso();

int y = 300;
int x = 200;
int scrollx = 0;
int scrolly = 0;
int gravity = -15;
int inerc;
int arma = 1;

const int scrx = 900;
const int scry = 600;
const int megamanWidth = 100;
const int megamanHeight =100;
    
vector<Bala> v_balas;
vector<Ladrillo> v_ladrillos;
vector<Met> v_mets;

BITMAP *buffer;
BITMAP *fondo;
BITMAP *megaman;
BITMAP *megamansaltad;
BITMAP *megamansaltai;
BITMAP *megamancorred1;
BITMAP *megamancorred2;
BITMAP *megamancorred3;
BITMAP *megamancorrei1;
BITMAP *megamancorrei2;
BITMAP *megamancorrei3;
BITMAP *megamandisparad;
BITMAP *megamandisparai;
BITMAP *bala;
BITMAP *ladrillo;
BITMAP *met;
BITMAP *gameover;

int main() 
    {
	init();
	while (!key[KEY_ESC]) 
    {
          if(!suelo)
          {
                y += gravity;
                if (!left)
                {
                       scrollx += inerc;
                       draw_sprite(screen, fondo, scrollx, scrolly);
                       draw_sprite(screen, megamansaltai, x, y);
                }
                else if (left)
                {
                       scrollx -= inerc;
                       draw_sprite(screen, fondo, scrollx, scrolly);
                       draw_sprite(screen, megamansaltad, x, y);
                }
                rest(20);
                gravity++;
                if ( y >450)
                {
                       suelo = true;
                }
                if (y > 600)
                {
                       goto Acabose;
                }
          }
          else if(suelo)
          {
                if(key[KEY_LEFT] && !foso())
		        {
                       correi();
                }
                if(key[KEY_RIGHT] && !foso())
                {
                       corred();  
                } 
                if(!key[KEY_LEFT] && !key[KEY_RIGHT])
                {
                       quieto();
                }
                if(key[KEY_UP] && !foso())
                {
                       gravity = -20;
                       suelo = false;
                }
                if(inerc > 20)
                {
                       inerc = 20;
                }
                if(foso())
                {
                       suelo = false;
                }
          }
          if(key[KEY_1])
          {
                arma = 1;
          }
          if(key[KEY_2])
          {
                arma = 2;
          }
          if(key[KEY_SPACE] && arma == 1)
          {
                dbala(); 
          }
          if(key[KEY_SPACE] && arma == 2)
          {
                dladrillo();
          }
          mmets();
          mbalas();
          mladrillos();
          crea_met();          
    }
    Acabose:
          draw_sprite(screen, gameover, 0, 0);  
          rest(3000);
	deinit();
	return 0;
}
END_OF_MAIN()

void init() 
{
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, scrx, scry, 0, 0);
	if (res != 0) 
    { 
	      allegro_message(allegro_error);
	      exit(-1);
	}
	install_timer();
	install_keyboard();
	install_mouse();
	buffer = load_bitmap("buffer.bmp", NULL);
    megaman = load_bitmap("megaman.bmp", NULL);
    fondo = load_bitmap("fondo.bmp", NULL);    
    bala = load_bitmap("bala.bmp", NULL);     
    ladrillo = load_bitmap("ladrillo.bmp", NULL);  
    megamansaltad = load_bitmap("megaman-saltad.bmp", NULL);
    megamansaltai = load_bitmap("megaman-saltai.bmp", NULL);
    megamancorred1 = load_bitmap("megaman-corred1.bmp", NULL);
    megamancorred2 = load_bitmap("megaman-corred2.bmp", NULL);
    megamancorred3 = load_bitmap("megaman-corred3.bmp", NULL);
    megamancorrei1 = load_bitmap("megaman-correi1.bmp", NULL);
    megamancorrei2 = load_bitmap("megaman-correi2.bmp", NULL);
    megamancorrei3 = load_bitmap("megaman-correi3.bmp", NULL);
    megamandisparad = load_bitmap("megaman-disparad.bmp", NULL);
    megamandisparai = load_bitmap("megaman-disparai.bmp", NULL);
    met = load_bitmap("met.bmp", NULL);
    gameover = load_bitmap("gameover.bmp", NULL);
}

void deinit() 
{
   	clear_keybuf();
}

void corred()
{
    left = true;
    scrollx-=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorred1, x, y);
    rest(25);
    scrollx-=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorred3, x, y);
    rest(25);
    scrollx-=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorred2, x, y);
    rest(25);
    scrollx-=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorred3, x, y);
    rest(25);
    inerc++;
}

void quieto()
{
    draw_sprite(screen, fondo, scrollx, scrolly);
	draw_sprite(screen, megaman, x, y);
	inerc = 0; 
}
     
void correi()
{
    left = false;
    scrollx+=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorrei2, x, y);
    rest(25);
    scrollx+=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
	draw_sprite(screen, megamancorrei3, x, y);
    rest(25);
    scrollx+=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
	draw_sprite(screen, megamancorrei2, x, y);
    rest(25);
    scrollx+=20;
    draw_sprite(screen, fondo, scrollx, scrolly);
    draw_sprite(screen, megamancorrei3, x, y);
    rest(25);
    inerc++;
}

void dbala()
{
    Bala b;
    b.x = (x + 25);
    b.y = (y + 40);
    b.vel = 50;
    b.dir = left;
    v_balas.push_back(b);
    if(left == true)
    {
          draw_sprite(screen, fondo, scrollx, scrolly);
          draw_sprite(screen, megamandisparad, x, y);
    }
    if(left == false)
    {
          draw_sprite(screen, fondo, scrollx, scrolly);
          draw_sprite(screen, megamandisparai, x, y);
    }
}

void dladrillo()
{
    Ladrillo l;
    l.x = (x + 25);
    l.y = (y + 40);
    l.vel = 5;
    l.dir = left;
    l.g = -30;
    l.suel = false;
    v_ladrillos.push_back(l);
    if(left == true)
    {
          draw_sprite(screen, fondo, scrollx, scrolly);
          draw_sprite(screen, megamandisparad, x, y);
    }
    if(left == false)
    {
          draw_sprite(screen, fondo, scrollx, scrolly);
          draw_sprite(screen, megamandisparai, x, y);
    }
}

void mbalas()
{
    if (v_balas.size() > 0)
    {
          for(int i =0; i < v_balas.size(); i++)
          {
                v_balas[i].muevebala(inerc);
                draw_sprite(screen, bala, v_balas[i].x, v_balas[i].y);
                if (v_balas[i].x > scrx || v_balas[i].x < (scrx - scrx))
                {
                      v_balas.erase(v_balas.begin() + i);
                }
          }
    rest(70);
    } 
}

void mladrillos()
{
    if (v_ladrillos.size() > 0)
    {
          for(int i =0; i < v_ladrillos.size(); i++)
          {
                v_ladrillos[i].mueveladrillo(inerc);
                draw_sprite(screen, ladrillo, v_ladrillos[i].x, v_ladrillos[i].y);
                if (v_ladrillos[i].x > scrx || v_ladrillos[i].x < (scrx - scrx) || v_ladrillos[i].y == 340)
                {
                      v_ladrillos.erase(v_ladrillos.begin() + i);                        
                }
          }
          rest(40);
    }
}

void mmets()
{
    if (v_mets.size() > 0)
    {
          for(int i =0; i < v_mets.size(); i++)
          {
                v_mets[i].muevealeatorio(inerc);
                draw_sprite(screen, met, v_mets[i].x, v_mets[i].y);
                if (v_mets[i].x > scrx || v_mets[i].x < (scrx - scrx))
                {
                      v_mets.erase(v_mets.begin() + i);                 
                }
          }
          rest(40);
    } 
}
              
void crea_met()
{
    int done = (1 + rand()%100000);
    if (key[KEY_Q] || done == 11)
    {
          Met m;
          m.x = 500;
          m.y = 400;
          m.vel = 10;
          m.dir  =! left;
          v_mets.push_back(m);
    }
}

bool foso()
{
    if(scrollx < -877 && scrollx > -1024)
    {
          return true;
    }
    if(scrollx < -1900 && scrollx > -2019)
    {
          return true;
    }
}
