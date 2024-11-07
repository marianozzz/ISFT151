#ifndef PEDIDO_H
#define PEDIDO_H

#include "Cliente.h"
#include "Empleado.h"
#include "Articulo.h"

class Pedido {
public:
    Cliente cliente;
    Empleado empleado;
    Articulo** articulos;  // Doble puntero para el arreglo dinámico de artículos
    int cantidadArticulos;

    // Constructor y Destructor
    Pedido(const Cliente& cli, const Empleado& emp, const Articulo* arts, int cantArts);
    ~Pedido();
};

#endif // PEDIDO_H


