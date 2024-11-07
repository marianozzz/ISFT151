#include "Pedido.h"

// Constructor modificado para inicializar con art�culos
Pedido::Pedido(const Cliente& cli, const Empleado& emp, const Articulo* arts, int cantArts)
    : cliente(cli), empleado(emp), cantidadArticulos(cantArts) {

    // Crear el arreglo de punteros con la cantidad de art�culos
    articulos = new Articulo*[cantidadArticulos];
    for (int i = 0; i < cantidadArticulos; ++i) {
        articulos[i] = new Articulo(arts[i]);  // Copiar cada art�culo
    }
}

// Destructor
Pedido::~Pedido() {
    for (int i = 0; i < cantidadArticulos; ++i) {
        delete articulos[i];  // Liberar cada art�culo
    }
    delete[] articulos;  // Liberar el arreglo de punteros
}


