//
// Created by Flavia Rivero on 29/11/24.
//
#include "main.h"
#include <iostream>

double Geometria::calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

double Geometria::calcularAreaCirculo(double radio) {
    return 3.14159265358979323846 * radio * radio;
}

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
