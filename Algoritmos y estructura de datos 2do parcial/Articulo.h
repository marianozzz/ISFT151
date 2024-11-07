#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>

class Articulo {
private:
    int codigo;
    std::string nombre;
    double precio;

public:
    // Constructor
    Articulo(int cod, const std::string& nom, double prec);

    // Getters
    int getCodigo() const;
    std::string getNombre() const;
    double getPrecio() const;

    // Setters
    void setCodigo(int cod);
    void setNombre(const std::string& nom);
    void setPrecio(double prec);

    // Método para mostrar datos
    void mostrarDatos() const;
};

#endif // ARTICULO_H

