//
// Created by Flavia Rivero on 29/11/24.
//

//EJERCICIO 2
#ifndef CIRCULO_H
#define CIRCULO_H

namespace Geometria {
    double calcularAreaCirculo(double radio);
}



//EJERCICIO 3
namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea();
        double calcularPerimetro();
    };
}


#endif // CIRCULO_H