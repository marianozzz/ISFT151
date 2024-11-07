#include <iostream>
#include "Cliente.h"
#include "Empleado.h"
#include "Articulo.h"
#include "Pedido.h"


void mostrarPedido(const Pedido& pedido);

int main() {

    // Crear objetos de Cliente y Empleado
    Cliente cliente1(1, "Juan", "Perez");
    Empleado empleado1(101, "Ana", "Martinez");

   // Crear algunos art�culos
    Articulo articulos[] = {
        Articulo(2001, "Laptop", 750.99),
        Articulo(2002, "Mouse", 20.49),
        Articulo(2003, "Teclado", 45.00)
    };

    // Crear un pedido con cliente, empleado y art�culos
    Pedido pedido1(cliente1, empleado1, articulos, 3);

    // Mostrar la informaci�n completa del pedido
    std::cout << "\nDetalles del Pedido:\n";
    mostrarPedido(pedido1);

    return 0;
}



// Funci�n para mostrar la informaci�n completa del pedido
void mostrarPedido(const Pedido& pedido) {
    std::cout << "Informacion del Cliente:\n";
    pedido.cliente.mostrarDatos();

    std::cout << "\nInformacion del Empleado:\n";
    pedido.empleado.mostrarDatos();

    std::cout << "\nArticulos en el Pedido:\n";
    for (int i = 0; i < pedido.cantidadArticulos; i++) {
        pedido.articulos[i]->mostrarDatos();
        std::cout << "---------------------\n";
    }
}
