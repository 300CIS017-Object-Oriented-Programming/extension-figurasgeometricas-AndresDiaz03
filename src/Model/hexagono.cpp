//
// Created by andre on 11/10/2022.
//
#include "hexagono.h"

Hexagono ::Hexagono() {
    lado = 0;
    apotema = 0;
    nombreFigura = "Hexagono";
}

Hexagono ::Hexagono(float lado, float apotema):Hexagono() {
    this->lado = lado;
    this->apotema = apotema;
}

