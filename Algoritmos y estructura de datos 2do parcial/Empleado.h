#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
private:
    int codigo;
    std::string nombre;
    std::string apellido;

public:
    // Constructor
    Empleado(int cod, const std::string& nom, const std::string& ape);

    // Getters
    int getCodigo() const;
    std::string getNombre() const;
    std::string getApellido() const;

    // Setters
    void setCodigo(int cod);
    void setNombre(const std::string& nom);
    void setApellido(const std::string& ape);

    // Método para mostrar datos
    void mostrarDatos() const;
};

#endif // EMPLEADO_H

