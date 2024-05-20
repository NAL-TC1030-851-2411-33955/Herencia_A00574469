#include <cmath>
#include "Rectangulo.hpp"

Rectangulo::Rectangulo(){
    base=1;
    altura=1;
}

Rectangulo::Rectangulo(int _x, int _y, int _base, int _altura):Figura(_x, _y){
    setAltura(_altura);
    setBase(_base);
}

void Rectangulo::setAltura(int _altura){
    if (altura=0){
        _altura=1;
    }else{
        altura=_altura;
    }
}

void Rectangulo::setBase(int _base){
    if (base=0){
        _base=1;
    }else{
        base=_base;
    }
}

int Rectangulo::getAltura() const{
    return altura;
}

int Rectangulo::getBase() const{
    return base;
}

double Rectangulo::area(){
    return base*altura;
}

double Rectangulo::perimetro(){
    return (2*base)+(2*altura);
}

void Rectangulo::imprime(){
    std::cout<<"Base = "<<base<<std::endl;
    std::cout<<"Altura = "<<altura<<std::endl;
    std::cout<<"CoordenadaX = "<<getX()<<std::endl;
    std::cout<<"CoordenadaY = "<<getY()<<std::endl;
    std::cout<<"Altura = "<<altura<<std::endl;
    std::cout<<"Area = "<<area()<<std::endl;
    std::cout<<"Perimetro = "<<perimetro()<<std::endl;
}