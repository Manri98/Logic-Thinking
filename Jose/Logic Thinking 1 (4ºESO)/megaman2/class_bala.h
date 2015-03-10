#include <iostream>

class Bala
{
      public:
             int x;
             int y;
             int vel; 
             bool live;
             bool dir;
     
             void mueve_bala()
             {
                  if (dir)
                  {
                     x += vel;
                     }
                     else
                     {
                         x -= vel;
                     }
             } 

};

class Granada : public Bala
{
      public:
             int gravity;
     
             void mueve_granada(int inertia)
             {
                  if (dir)
                  {
                     
                     if (key[KEY_LEFT])
                     {
                                       x += inertia + vel;
                                       }
                     if (key[KEY_RIGHT])
                     {
                                       x += -inertia + vel;
                                       }
                     if (!key[KEY_RIGHT]&&!key[KEY_LEFT])
                     {
                                       x += vel;
                                       }
                  }
                  else
                  {
                     if (key[KEY_LEFT])
                     {
                                       x -= inertia + vel;
                                       }
                     if (key[KEY_RIGHT])
                     {
                                       x += inertia + vel;
                                       }
                     if (!key[KEY_RIGHT]&&!key[KEY_LEFT])
                     {
                                       x -= vel;
                                       }
                  }
                     y += gravity;
                     gravity++;
             } 

};
