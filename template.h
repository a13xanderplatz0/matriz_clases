#pragma once
#include <iostream>

// Clase genérica Matrix
template <typename T>
class Matrix {
public:
    // Constructor: inicializa una matriz de tamaño filas x columnas
    Matrix(int filas, int columnas);

    // Destructor: libera la memoria asignada dinámicamente
    ~Matrix();

    // Método para obtener un valor en la posición (fila, columna)
    T get(int fila, int columna) const;

    // Método para establecer un valor en la posición (fila, columna)
    void set(int fila, int columna, T valor);

    // Sobrecarga del operador () para acceder a los elementos
    T& operator()(int fila, int columna);

private:
    T* data; // Puntero al arreglo unidimensional que almacena los datos
    int rows, cols; // Dimensiones de la matriz
};

// Implementación del constructor
template <typename T>
Matrix<T>::Matrix(int filas, int columnas) : rows(filas), cols(columnas) {
    data = new T[rows * cols]; // Reserva memoria para la matriz
}

// Implementación del destructor
template <typename T>
Matrix<T>::~Matrix() {
    delete[] data; // Libera la memoria asignada
}

// Implementación del método get
template <typename T>
T Matrix<T>::get(int fila, int columna) const {
    return data[fila * cols + columna]; // Calcula el índice lineal y retorna el valor
}

// Implementación del método set
template <typename T>
void Matrix<T>::set(int fila, int columna, T valor) {
    data[fila * cols + columna] = valor; // Calcula el índice lineal y asigna el valor
}

// Implementación de la sobrecarga del operador ()
template <typename T>
T& Matrix<T>::operator()(int fila, int columna) {
    return data[fila * cols + columna]; // Retorna una referencia al valor
}