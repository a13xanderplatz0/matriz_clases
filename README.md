# Proyecto: cMatrixL

Este proyecto implementa una clase `cMatrixL` que representa una matriz bidimensional utilizando un arreglo unidimensional (linealizado). La clase incluye métodos para acceder y modificar los elementos de la matriz, así como un constructor y destructor para gestionar la memoria dinámica.

---

## **Estructura del Proyecto**

### **Archivos principales**
1. **`vector.h`**: Archivo de cabecera que contiene la declaración de la clase `cMatrixL`.
2. **`vector.cpp`**: Archivo de implementación que define los métodos de la clase `cMatrixL`.

---

## **Clase `cMatrixL`**

### **Atributos**
- **`int* vec`**: Puntero al arreglo unidimensional que almacena los elementos de la matriz.
- **`int dx`**: Número de columnas de la matriz.
- **`int dy`**: Número de filas de la matriz.

### **Métodos**
1. **Constructor:**
   ```cpp
   cMatrixL(int _dy, int _dx);

#### ** usando this **:cuando no cambio de nombre los parametros
class cMatrixL {
private:
    int dx, dy;

public:
    cMatrixL(int dx, int dy) { // Los parámetros tienen el mismo nombre que los atributos
        this->dx = dx; // Usa this para referirse al atributo de la clase
        this->dy = dy;
    }
};   