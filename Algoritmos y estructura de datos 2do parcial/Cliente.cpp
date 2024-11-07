#include "Cliente.h"
#include <iostream>

// Constructor
Cliente::Cliente(int cod, const std::string& nom, const std::string& ape)
    : codigo(cod), nombre(nom), apellido(ape) {}

// Getters
int Cliente::getCodigo() const {
    return codigo;
}

std::string Cliente::getNombre() const {
    return nombre;
}

std::string Cliente::getApellido() const {
    return apellido;
}

// Setters
void Cliente::setCodigo(int cod) {
    codigo = cod;
}

void Cliente::setNombre(const std::string& nom) {
    nombre = nom;
}

void Cliente::setApellido(const std::string& ape) {
    apellido = ape;
}

// Método para mostrar datos
void Cliente::mostrarDatos() const {
    std::cout << "Codigo: " << codigo << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Apellido: " << apellido << "\n";
}
