//
// Created by andre on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_HEXAGONO_H
#define EJERCICIO_POLIMORFISMO_HEXAGONO_H

#include "FiguraGeometrica.h"
#include <cmath>
#include <iostream>

class Hexagono : public FiguraGeometrica {
    private:
        float lado;
        float apotema;
    public:
        Hexagono();
        virtual ~Hexagono() = default;
        Hexagono(float lado, float apotema);
        void dibujarFigura() override;
        float calcularArea() override;
        float calcularPerimetro() override;
        float calcularApotema() override;

};

#endif //EJERCICIO_POLIMORFISMO_HEXAGONO_H
