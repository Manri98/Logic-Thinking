#include <allegro.h>
#include <cstdlib>
#include <vector>
#include "class_bala.h"
#include "class_personaje.h"

using namespace std;

void init();
void deinit();

void fall(int ground, int y_pos);
void shoot();
void selector_arma();
void crear_arma();
void mueve_armas();
void inertia_control();
void crea_met();

// Las constantes scrx y scry indican el tamaño de la ventana.
const int scrx = 900;
const int scry = 600;
// Nuestro personaje megaman tiene también un tamaño definido con constantes
const int megamanWidth = 105; // Ancho de Megaman
const int megamanHeight = 83; // Alto de Megaman
// Las variables x e indican la posición de inicio de Megaman
int megaman_Y = 100; 
int megaman_X = 300;
// Variables para controlar el movimiento de Megaman
int acceleration = 3;
int ground = 450;
bool isonground = false;
int scroll_X = 0, scroll_Y = -100;
int bala_X = 104, bala_Y = 35;
bool shooting = false;
int active_bullets = 0;
bool direction = true;
int arma = 1;
int gravity = -10; // Si gravity es negativo, el sprite subirá
int inertia = 0;
int vel = 30;

vector<Bala> v_balas;
vector<Granada> v_granadas;

// Lista de imágenes del programa
BITMAP *buffer; // Creamos un bitmap del tamaño de la ventana
BITMAP *background;
BITMAP *megaman_standing; // Creamos un bitmap en el que dibujaremos a Megaman
BITMAP *megaman_standing_L;
BITMAP *megaman_running1_R;
BITMAP *megaman_running2_R;
BITMAP *megaman_running3_R;
BITMAP *megaman_running1_L;
BITMAP *megaman_running2_L;
BITMAP *megaman_running3_L;
BITMAP *megaman_shoot;
BITMAP *megaman_shoot_L;
BITMAP *megaman_jump_shoot;
BITMAP *megaman_jump_shoot_L;
BITMAP *megaman_touched;
BITMAP *megaman_falling;
BITMAP *megaman_falling_L;
BITMAP *bala;
BITMAP *granada;

int main() {
	init(); // Llamada a la función que inicializa la librería Allegro
    
	background = load_bitmap("background1.bmp", NULL);
    megaman_standing = load_bitmap("megaman-standing.bmp", NULL); 
    megaman_standing_L = load_bitmap("megaman-standing-L.bmp", NULL);
    megaman_running1_R = load_bitmap("megaman-running1-R.bmp", NULL);
    megaman_running2_R = load_bitmap("megaman-running2-R.bmp", NULL);
    megaman_running3_R = load_bitmap("megaman-running3-R.bmp", NULL);
    megaman_running1_L = load_bitmap("megaman-running1-L.bmp", NULL);
    megaman_running2_L = load_bitmap("megaman-running2-L.bmp", NULL);
    megaman_running3_L = load_bitmap("megaman-running3-L.bmp", NULL);
    megaman_shoot = load_bitmap("megaman-shoot.bmp", NULL);
    megaman_shoot_L = load_bitmap("megaman-shoot-L.bmp", NULL);
    megaman_jump_shoot = load_bitmap("megaman-jump-shoot.bmp", NULL);
    megaman_jump_shoot_L = load_bitmap("megaman-jump-shoot-L.bmp", NULL);
    megaman_touched = load_bitmap("megaman-touched.bmp", NULL);
    megaman_falling = load_bitmap("megaman-falling.bmp", NULL);
    megaman_falling_L = load_bitmap("megaman-falling-L.bmp", NULL);
    bala = load_bitmap("bala.bmp", NULL);
    granada = load_bitmap("granada.bmp", NULL);

    set_alpha_blender(); // Activa el canal alpha para poder trabajar con imágenes con transparencia
		
    // Para dibujar sprites con pixels transparentes, uso draw_trans_sprite
    draw_sprite(screen, background, scroll_X, scroll_Y);
    

 
	while (!key[KEY_ESC]) 
    {
         selector_arma();     
		// SI ESTÁ EN EL AIRE, MEGAMAN TIENE QUE CAER
		if (!isonground)
		{                       
                          
                        fall(ground, megaman_Y);
                        //megaman_X += inertia;
                        draw_sprite(screen, background, scroll_X, scroll_Y);
                        // Cuando está en el aire, la inercia debe disminuir poco a poco

                        if (direction)
                        {
                                      scroll_X -= inertia;
                                      draw_sprite(screen, megaman_falling, megaman_X, megaman_Y); 
                              }
                        else {
                                      scroll_X += inertia;
                                      draw_sprite(screen, megaman_falling_L, megaman_X, megaman_Y); 
                                  }  
                  
                        
                        
                        
                        
        }
        //////////////////////////////////////////////////
        // SI ESTÁ EN EL SUELO, EL PROGRAMA ME DEJA SALTAR
        else if (isonground)
        {
                       if (!key[KEY_LEFT] && !key[KEY_RIGHT])
                       {
                                          draw_sprite(screen, background, scroll_X, scroll_Y);
                                          inertia = 0;
                                          if (direction)
                                          {
                                             draw_sprite(screen, megaman_standing, megaman_X, megaman_Y);
                                             }
                                          else{
                                               draw_sprite(screen, megaman_standing_L, megaman_X, megaman_Y);
                                               }
                                          rest(50);
                       }

                       if (key[KEY_UP])
                       {
                                       megaman_Y += gravity;
                                       isonground = false;
	                                   rest(50);
                       }
                       if (key[KEY_LEFT] && scroll_X < 0)
		               {
                          direction = false;
                          inertia--;
                          scroll_X += vel;
                          
                          //draw_sprite(screen, buffer, 0, 0);
                          draw_sprite(screen, background, scroll_X, scroll_Y);
                          draw_sprite(screen, megaman_running1_L, megaman_X, megaman_Y);
	                      rest(30); 
	                      
	                      scroll_X += vel;
	                      //draw_sprite(screen, buffer, 0, 0);
	                      draw_sprite(screen, background, scroll_X, scroll_Y);
	                      draw_sprite(screen, megaman_running2_L, megaman_X, megaman_Y);
	                      rest(30);
	                     
	                      scroll_X += vel;
	                      //draw_sprite(screen, buffer, 0, 0);
	                      draw_sprite(screen, background, scroll_X, scroll_Y);
	                      draw_sprite(screen, megaman_running3_L, megaman_X, megaman_Y);
	                      rest(30);

                       }
                       else if (key[KEY_RIGHT] && scroll_X > -3100)
		               {
                          direction = true;
                          inertia++;
                          scroll_X -= vel;
                          
                          //draw_sprite(screen, buffer, 0, 0);
                          draw_sprite(screen, background, scroll_X, scroll_Y);
                          draw_sprite(screen, megaman_running1_R, megaman_X, megaman_Y);
	                      rest(30); 
	                      
	                      scroll_X -= vel;
	                      //draw_sprite(screen, buffer, 0, 0);
	                      draw_sprite(screen, background, scroll_X, scroll_Y);
	                      draw_sprite(screen, megaman_running2_R, megaman_X, megaman_Y);
	                      rest(30);
	                      
	                      scroll_X -= vel;
	                      //draw_sprite(screen, buffer, 0, 0);
	                      draw_sprite(screen, background, scroll_X, scroll_Y);
	                      draw_sprite(screen, megaman_running3_R, megaman_X, megaman_Y);
	                      rest(30);
                       }
                      
                      
        }    
         if (key[KEY_SPACE])
                       {
                          
                          crear_arma();
                          draw_sprite(screen, background, scroll_X, scroll_Y);
                          if (isonground && direction)
                          {
                                  draw_sprite(screen, megaman_shoot, megaman_X, megaman_Y);     
                          } 
                          else if (!isonground && direction)
                          {
                                  draw_sprite(screen, megaman_jump_shoot, megaman_X, megaman_Y);     
                          }  
                          else if (isonground && !direction)
                          {
                                  draw_sprite(screen, megaman_shoot_L, megaman_X, megaman_Y);     
                          }  
                          else if (!isonground && !direction)
                          {
                                  draw_sprite(screen, megaman_jump_shoot_L, megaman_X, megaman_Y);     
                          }   
                          
                       }         
        
        /////////////////////////////////////////////////////////////////
        // PONGO UN LÍMITE EN EL SUELO PARA QUE NO SIGA CAYENDO
        if ( megaman_Y > ground) 
        { 
             megaman_Y = ground; 
        }
        
        inertia_control();
        ///////////////////////////////////////////////////////////////////
        // DIBUJO LAS BALAS ////////////////////////////////////////////
        mueve_armas();
        crea_met();
        rest(50);
    }
    // Libero el espacio que guardé para los bitmaps
    destroy_bitmap(megaman_standing);
    destroy_bitmap(megaman_running1_R);
    destroy_bitmap(megaman_running2_R);
    destroy_bitmap(megaman_running3_R);
    destroy_bitmap(megaman_running1_L);
    destroy_bitmap(megaman_running2_L);
    destroy_bitmap(megaman_running3_L);
    destroy_bitmap(megaman_shoot);
    destroy_bitmap(megaman_jump_shoot);
    destroy_bitmap(megaman_falling);
    destroy_bitmap(megaman_touched);
    //destroy_bitmap(buffer);
    destroy_bitmap(background);
    
	deinit();
	return 0;
}
END_OF_MAIN()

/* La función init() inicializa la librería Allegro las variables generales como la profundidad de color
que usaremos y la ventana principal */
void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	//set_color_depth(depth);
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, scrx, scry, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

/* Al final del programa hay que liberar todo el espacio que reservamos para nuestro juego
haciendo clear_keybuff(), de forma que Allegro "deje en paz" al CPU */
void deinit() {
	clear_keybuf();
	
}

void inertia_control()
{
     if (inertia < -30)
     {
                 inertia = -30;
                 }
     else if (inertia > 30)
     {
          inertia = 30;
          }
}

// fall es la función que hace actuar a la gravedad
void fall(int ground, int y_pos)
{
      megaman_Y += gravity;
      gravity++;
                      
      // Cuando Megaman llegue al cuelo, hago que isonground sea true  
      if (megaman_Y >= ground)
      {
             isonground = true;
             gravity = -10;
             
      }    
}


void selector_arma()
{
     if (key[KEY_1])
     {
                    arma = 1;
     }
     if (key[KEY_2])
     {
                    arma = 2;
     }
}

void crear_arma()
{
     switch (arma)
     {
            case 1:
                   Bala new_bala;
                   new_bala.x = megaman_X+20;
                   new_bala.y = megaman_Y + 35;
                   new_bala.vel = 50;
                   new_bala.dir = direction;
                   new_bala.live = true;
                   v_balas.push_back(new_bala); 
                   break; 
            case 2:
                   Granada new_granada;
                   new_granada.x = megaman_X+20;
                   new_granada.y = megaman_Y + 35;
                   new_granada.vel = 12;
                   new_granada.dir = direction;
                   new_granada.live = true;
                   new_granada.gravity = -15;
                   v_granadas.push_back(new_granada); 
                   break;    
     }     
}

void mueve_armas()
{
      for (int i = 0; i < v_balas.size(); i++)
        {
              if (v_balas[i].live)
              {
                            v_balas[i].mueve_bala();                           
                            draw_sprite(screen, bala, v_balas[i].x, v_balas[i].y);  
                            
                            
               }
              
        }  
        for (int i = 0; i < v_granadas.size(); i++)
        {
              if (v_granadas[i].live)
              {
                            v_granadas[i].mueve_granada(inertia);                           
                            draw_sprite(screen, granada, v_granadas[i].x, v_granadas[i].y);  
                            
                            
               }
              
        }          
}


void crea_met()
{
     int done;
      
     done = (1+ rand() %1000) ;
     if (done > 10 && done < 15)
     {
              allegro_message("Met!");
              }
}
