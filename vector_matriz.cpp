#include "vector_matriz.h"
#include <iostream>
#include <stdexcept>

// Constructor: inicializa una matriz de tamaño filas x columnas
cMatrixM::cMatrixM(int filas, int columnas) : filas(filas), columnas(columnas) {
    // Reserva memoria para las filas
    m = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        // Reserva memoria para las columnas de cada fila
        m[i] = new int[columnas];
    }

    // Inicializa la matriz con ceros usando aritmética de punteros
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            *(*(m + i) + j) = 0; // *(m + i) apunta a la fila, *(m + i) + j apunta a la columna
        }
    }
}

// Destructor: libera la memoria asignada dinámicamente
cMatrixM::~cMatrixM() {
    for (int i = 0; i < filas; ++i) {
        delete[] *(m + i); // Libera la memoria de cada fila usando aritmética de punteros
    }
    delete[] m; // Libera la memoria del arreglo de punteros
}

// Método para obtener un valor en la posición (fila, columna)
int cMatrixM::get(int fila, int columna) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("Índice fuera de rango");
    }
    return *(*(m + fila) + columna); // *(m + fila) apunta a la fila, *(m + fila) + columna apunta al valor
}

// Método para establecer un valor en la posición (fila, columna)
void cMatrixM::set(int fila, int columna, int valor) {
    if (fila < 0 || fila >= filas || columna < 0 || columna >= columnas) {
        throw std::out_of_range("Índice fuera de rango");
    }
    *(*(m + fila) + columna) = valor; // *(m + fila) apunta a la fila, *(m + fila) + columna apunta al valor
}

int main() {
    cMatrixM matriz(4, 3); // Crea una matriz de 4 filas y 3 columnas

    // Establecer valores en la matriz
    matriz.set(0, 0, 10);
    matriz.set(1, 1, 20);
    matriz.set(2, 2, 30);

    // Obtener y mostrar valores de la matriz
    std::cout << "Valor en (0, 0): " << matriz.get(0, 0) << std::endl;
    std::cout << "Valor en (1, 1): " << matriz.get(1, 1) << std::endl;
    std::cout << "Valor en (2, 2): " << matriz.get(2, 2) << std::endl;

    return 0;
}