#include "Empleado.h"
#include <iostream>

// Constructor
Empleado::Empleado(int cod, const std::string& nom, const std::string& ape)
    : codigo(cod), nombre(nom), apellido(ape) {}

// Getters
int Empleado::getCodigo() const {
    return codigo;
}

std::string Empleado::getNombre() const {
    return nombre;
}

std::string Empleado::getApellido() const {
    return apellido;
}

// Setters
void Empleado::setCodigo(int cod) {
    codigo = cod;
}

void Empleado::setNombre(const std::string& nom) {
    nombre = nom;
}

void Empleado::setApellido(const std::string& ape) {
    apellido = ape;
}

// Método para mostrar datos
void Empleado::mostrarDatos() const {
    std::cout <<" \n ----Datos del Empleado ------"<< "\n";
    std::cout << "Codigo: " << codigo << "\n";
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Apellido: " << apellido << "\n";
}
