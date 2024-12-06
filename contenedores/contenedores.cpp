//
// Created by Flavia Rivero on 6/12/24.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "contenedores.h"

void manejarContenedores() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar elemento
    for (int num : numeros) {
        std::cout << num << " "; // Mostrar elementos
    }
    std::cout << std::endl;

    // Map
    std::map<std::string, int> edad;
    edad["Juan"] = 25; // Agregar elemento
    edad.erase("Juan"); // Eliminar elemento
    edad["Flavia"] = 30; // Agregar otro elemento
    for (const auto& pair : edad) {
        std::cout << pair.first << ": " << pair.second << std::endl; // Mostrar elementos
    }

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6); // Agregar elemento
    conjunto.erase(1); // Eliminar elemento
    for (int num : conjunto) {
        std::cout << num << " "; // Mostrar elementos
    }
    std::cout << std::endl;
}






