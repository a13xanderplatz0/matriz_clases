#ifndef VECTOR_MATRIZ_H
#define VECTOR_MATRIZ_H

#include <iostream>

// Declaración de la clase cMatrixM
class cMatrixM {
public:
    // Constructor: inicializa una matriz de tamaño filas x columnas
    cMatrixM(int filas, int columnas);

    // Destructor: libera la memoria asignada dinámicamente
    ~cMatrixM();

    // Método para obtener un valor en la posición (fila, columna)
    int get(int fila, int columna);

    // Método para establecer un valor en la posición (fila, columna)
    void set(int fila, int columna, int valor);

private:
    int** m; // Puntero doble que representa una matriz de 4x3
    int filas, columnas; // Dimensiones de la matriz
};

#endif // Fin de la protección contra múltiples inclusiones