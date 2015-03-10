#include <allegro.h>
#include <vector>

class Bala
{
      public:
      int x;
      int y;
      int vel;
      bool dir;
     
      void muevebala(int inercia)
      {
           if (dir)
           {
                x += vel;
                if(key[KEY_RIGHT])
                {
                        x = x - inercia - 400;
                }
           }
           else
           {
                x -= vel;
                if(key[KEY_LEFT])
                {
                        x = x + inercia + 400;
                }
                
           }
      }
};
class Ladrillo : public Bala
{
      public:
      int g;
      bool suel;
     
      void mueveladrillo(int inercia)
      {
           if(!suel)
           {
                if (!dir)
                {
                         x -= vel;
                         if(key[KEY_LEFT])
                         {
                                  x = x + inercia + 90;
                                  
                         }
                }
                else if (dir)
                {
                         x += vel;
                         if(key[KEY_RIGHT])
                         {
                                  x = x - inercia - 90;
                         }
                }
                y += g;
                g = g + 4;
           }
      }
};
