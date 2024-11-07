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

   // Crear algunos artículos
    Articulo articulos[] = {
        Articulo(2001, "Laptop", 750.99),
        Articulo(2002, "Mouse", 20.49),
        Articulo(2003, "Teclado", 45.00)
    };

    // Crear un pedido con cliente, empleado y artículos
    Pedido pedido1(cliente1, empleado1, articulos, 3);

    // Mostrar la información completa del pedido
    std::cout << "\nDetalles del Pedido:\n";
    mostrarPedido(pedido1);

    return 0;
}



// Función para mostrar la información completa del pedido
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
