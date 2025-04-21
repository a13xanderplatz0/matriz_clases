#include <iostream> // Incluye la biblioteca estándar para entrada/salida
#include "vector.h" // Incluye el archivo de cabecera donde se declara la clase cMatrixL

// Constructor de la clase cMatrixL
// Inicializa una matriz de tamaño _dy x _dx
// Se usa un arreglo unidimensional (linealizado) para representar la matriz
cMatrixL::cMatrixL(int _dy, int _dx) : dy(_dy), dx(_dx) {//inicializa y have qu tenga los valores correctios antes de que el cuerpo del constructor se ejecute 
    vec = new int[dy * dx]; // Reserva memoria dinámica para almacenar los elementos de la matriz
}

// Destructor de la clase cMatrixL
// Libera la memoria asignada dinámicamente para evitar fugas de memoria
cMatrixL::~cMatrixL() {
    delete[] vec; // Libera el arreglo dinámico
}

// Método get
// Obtiene el valor almacenado en la posición (y, x) de la matriz
// Se calcula el índice lineal como y * dx + x
int cMatrixL::get(int y, int x) {
    return vec[y * dx + x]; // Devuelve el valor en la posición especificada
}

// Método set
// Establece un valor en la posición (y, x) de la matriz
// También retorna el valor que se acaba de establecer
int cMatrixL::set(int y, int x, int v) {
    vec[y * dx + x] = v; // Asigna el valor v en la posición especificada
    return v; // Retorna el valor asignado
}

// Método gs (get/set)
// Retorna una referencia al valor en la posición (y, x) de la matriz
// Esto permite tanto leer como modificar el valor directamente
int& cMatrixL::gs(int y, int x) {
    return vec[y * dx + x]; // Devuelve una referencia al valor en la posición especificada
}

// Sobrecarga del operador ()
// Permite acceder a los elementos de la matriz usando la sintaxis m(y, x)
// Similar a gs, retorna una referencia al valor en la posición (y, x)
int& cMatrixL::operator()(int y, int x) {
    return vec[y * dx + x]; // Devuelve una referencia al valor en la posición especificada
}

// Método validateIndex (comentado)
// Este método verifica si los índices (y, x) están dentro de los límites de la matriz
// Si no lo están, lanza una excepción std::out_of_range
/*void cMatrixL::validateIndex(int y, int x) const {
    if (y < 0 || y >= dy || x < 0 || x >= dx) { // Verifica si los índices están fuera de rango
        throw std::out_of_range("Índice fuera de rango"); // Lanza una excepción si los índices no son válidos
    }
}*/

// Función principal
// Aquí se prueba la funcionalidad de la clase cMatrixL
int main() {
    cMatrixL m(4, 3); // Crea una matriz de 4 filas y 3 columnas

    // Establecer y obtener valores
    std::cout << "Inicializando matriz de 4x3..." << std::endl;

    int a = m.get(2, 1); // Obtiene el valor en la posición (2, 1)
    std::cout << "Valor inicial en (2, 1): " << a << std::endl;

    m.set(2, 1, 8); // Establece el valor 8 en la posición (2, 1)
    std::cout << "Nuevo valor en (2, 1): " << m.get(2, 1) << std::endl;

    int b = m.gs(2, 2); // Obtiene el valor en la posición (2, 2) usando gs
    std::cout << "Valor inicial en (2, 2): " << b << std::endl;

    m.gs(2, 2) = 7; // Modifica el valor en la posición (2, 2) directamente usando gs
    std::cout << "Nuevo valor en (2, 2): " << m.get(2, 2) << std::endl;

    /* Este es el vector según mi profesor. Estamos haciendo un vector de 4x3,
       pero ya no de la forma tradicional, sino que todo en una sola línea:
       2, 7, 9, 4, 6, 5, 1, 5, 7, 3, 4, 1 */

    std::cout << "Programa finalizado correctamente." << std::endl;

    return 0; // Indica que el programa terminó correctamente
}