#pragma one
#include "Figura.hpp"

class Rectangulo: Figura{
    public:
    Rectangulo();
    Rectangulo(int,int,int,int);
    void setBase(int);
    int getBase() const;
    void setAltura(int);
    int getAltura() const;
    double area();
    double perimetro();
    void imprime();

    private:
    int base,altura;
};