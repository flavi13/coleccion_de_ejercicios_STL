//
// Created by Flavia Rivero on 29/11/24.
//


#include <iostream>
#include "triangulo/triangulo.h"
#include "contenedores/contenedores.h"
#include "circulo/circulo.h"
#include "ciencia/fisica/fisica.h"


//EJERCICIO 1
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
}


//EJERCICIO 3
namespace Geometria {
    Circulo::Circulo(double r) : radio(r) {}

    double Circulo::calcularArea() {
        return 3.14 * radio * radio;
    }

    double Circulo::calcularPerimetro() {
        return 2 * 3.14 * radio;
    }
}

// EJERCICIO 4
namespace Ciencia {
    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}



int main() {

// EJERCICIO 1
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;

//EJERCICIO 2
    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(3) << std::endl;

//EJERCICIO 3
    Geometria::Circulo c(5);
    std::cout << "Área del circulo con radio 5: " << c.calcularArea() << std::endl;
    std::cout << "Perímetro del circulo con radio 5: " << c.calcularPerimetro() << std::endl;

//EJERCICIO 4
    std::cout << "Energía: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;

//EJERCICIO 5
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;

    manejarContenedores();

    return 0;
}

