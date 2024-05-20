# pragma once 
# include "Figura.hpp"

class Circulo: Figura {
    public:
        Circulo();
        Circulo(int, int, int);
        int getRadio() const;
        void setRadio(int);
        double area();
        double perimetro();
        void imprime();

    private:
        int radio;
};