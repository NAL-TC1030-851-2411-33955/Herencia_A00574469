# include <cmath>
# include "Circulo.hpp"


Circulo::Circulo(){
    radio = 1;
}

Circulo::Circulo(int _x, int _y, int _radio):Figura(_x, _y){
    setRadio(_radio);
}

int Circulo::getRadio() const{
    return radio;
}

void Circulo::setRadio(int _radio){
    if(_radio < 0 ){
        _radio = 1;
    }else{
        radio = _radio;
    }
}

double Circulo::area(){
    return M_PI * pow(radio, 2);
}

double Circulo::perimetro(){
    return 2*M_PI*radio;
}

void Circulo::imprime(){
    Figura::imprime();
    std::cout<< "Circulo de radio " << radio << std::endl;
}