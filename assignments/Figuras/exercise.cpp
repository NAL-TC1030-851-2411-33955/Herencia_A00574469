#include <iostream>
#include "Circulo.hpp"
using namespace std;

int main() 
{
  Circulo c1;
  Circulo c2(2,2,4);
  Circulo c3(-2,0,-5);
  c1.imprime();
  c2.imprime();
  c3.imprime();
//cout<<"Coordenadas de centro del circulo 1:"<<c1.getX()<<","<<c1.getY()<<endl;
  return 0;
}
