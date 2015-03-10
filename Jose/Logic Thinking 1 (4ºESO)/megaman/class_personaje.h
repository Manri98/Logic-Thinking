class Personaje
{
      public:
            int x;
            int y;
            int vel;
            bool dir;
};

class Met : public Personaje
{
      public:
      void muevealeatorio(int inerc)
      {
           int don = (1 + rand()%100);
           if(don < 10)
           {
                  dir =! dir;
           }
           if(dir)
           {
                  x = x + vel;
                  x = x - inerc;
           }
           if(!dir)
           {
                  x = x - vel;
                  x = x + inerc;
           }
           
      }
      
};
