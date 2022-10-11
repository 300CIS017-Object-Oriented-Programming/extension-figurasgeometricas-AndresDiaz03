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

void Hexagono ::dibujarFigura() {
    cout << nombreFigura;
    cout << "\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0 || i == 5 || j == 0 || j == 9) {
                cout << "*";
            } else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float Hexagono::calcularPerimetro() {
    perimetro = 6 * lado;
    return perimetro;
}

float Hexagono::calcularApotema() {
    apotema = sqrt((lado * lado) - ((lado/2) * (lado/2)));
    return apotema;
}

float Hexagono::calcularArea() {
    area = (perimetro * apotema)/2;
    return area;
}