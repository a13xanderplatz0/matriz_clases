#include "template.h"
#include <iostream>

int main() {
    // Crear una matriz de enteros de 3x3
    Matrix<int> matriz(3, 3);

    // Establecer valores en la matriz
    matriz.set(0, 0, 10);
    matriz.set(1, 1, 20);
    matriz.set(2, 2, 30);

    // Obtener y mostrar valores de la matriz
    std::cout << "Valor en (0, 0): " << matriz.get(0, 0) << std::endl;
    std::cout << "Valor en (1, 1): " << matriz.get(1, 1) << std::endl;
    std::cout << "Valor en (2, 2): " << matriz.get(2, 2) << std::endl;

    // Usar la sobrecarga del operador () para acceder y modificar valores
    matriz(0, 1) = 15;
    std::cout << "Valor en (0, 1): " << matriz(0, 1) << std::endl;

    // Crear una matriz de doubles de 2x2
    Matrix<double> matrizD(2, 2);
    matrizD.set(0, 0, 3.14);
    matrizD.set(1, 1, 2.71);

    // Mostrar valores de la matriz de doubles
    std::cout << "Valor en (0, 0): " << matrizD.get(0, 0) << std::endl;
    std::cout << "Valor en (1, 1): " << matrizD.get(1, 1) << std::endl;

    return 0;
}