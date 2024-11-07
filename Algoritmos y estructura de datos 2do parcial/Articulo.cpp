#include "Articulo.h"
#include <iostream>

// Constructor
Articulo::Articulo(int cod, const std::string& nom, double prec)
    : codigo(cod), nombre(nom), precio(prec) {}

// Getters
int Articulo::getCodigo() const {
    return codigo;
}

std::string Articulo::getNombre() const {
    return nombre;
}

double Articulo::getPrecio() const {
    return precio;
}

// Setters
void Articulo::setCodigo(int cod) {
    codigo = cod;
}

void Articulo::setNombre(const std::string& nom) {
    nombre = nom;
}

void Articulo::setPrecio(double prec) {
    precio = prec;
}

// Método para mostrar datos
void Articulo::mostrarDatos() const {
    std::cout << "Codigo: " << codigo << "\n";
    std::cout << "Nombre del articulo: " << nombre << "\n";
    std::cout << "Precio: $" << precio << "\n";
}
