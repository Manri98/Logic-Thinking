#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

class Formas
{
      public:
      int altura;
      string color;
};

class Rectangulo : public Formas
{
      public:
      int base;
      
      int area()
      {
             return base*altura;
      }
      double diagonal()
      {
             return sqrt((base*base)+(altura*altura));
      }
};

class Triangulo : public Formas
{
      public:
      int base;
      int lados;
      
      double alturatri()
      {
          return sqrt((lados*lados)-((base/2)*(base/2)));
      }
      
      double area()
      {
             return (base/2)*alturatri();
      }
};
