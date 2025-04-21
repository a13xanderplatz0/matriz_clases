#ifndef VECTOR_H // Verifica si VECTOR_H no ha sido definido previamente
#define VECTOR_H // Define VECTOR_H para evitar múltiples inclusiones del archivo

/*#pragma once -- reemplaza ifndef,define,endif*/


// Declaración de la clase cMatrixL
class cMatrixL {
public:
    // Constructor: inicializa una matriz de tamaño _dy x _dx
    // _dy: número de filas de la matriz
    // _dx: número de columnas de la matriz
    cMatrixL(int _dy, int _dx);

    // Destructor: libera la memoria asignada dinámicamente para la matriz
    ~cMatrixL();

    // Método get:
    // Obtiene el valor almacenado en la posición (y, x) de la matriz
    // y: índice de la fila
    // x: índice de la columna
    // Retorna el valor almacenado en esa posición
    int get(int y, int x);

    // Método set:
    // Establece un valor en la posición (y, x) de la matriz
    // y: índice de la fila
    // x: índice de la columna
    // v: valor que se desea almacenar en esa posición
    // Retorna el valor que se acaba de establecer
    int set(int y, int x, int v);

    // Método gs (get/set):
    // Retorna una referencia al valor en la posición (y, x) de la matriz
    // Esto permite tanto leer como modificar el valor directamente
    int& gs(int y, int x);

    // Sobrecarga del operador ():
    // Permite acceder a los elementos de la matriz usando la sintaxis m(y, x)
    // Similar al método gs, retorna una referencia al valor en la posición (y, x)
    int& operator()(int y, int x);

private:
    int** m; // Puntero doble que representa una matriz de 4x3
    int dx, dy; // Dimensiones de la matriz:
                // dx: número de columnas
                // dy: número de filas

    // Método validateIndex (comentado):
    // Este método podría usarse para verificar si los índices (y, x) están dentro
    // de los límites de la matriz. Si no lo están, podría lanzar una excepción.
    // void validateIndex(int y, int x) const;
};

#endif // Fin de la protección contra múltiples inclusiones
