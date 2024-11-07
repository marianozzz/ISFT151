#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
private:
    int codigo;
    std::string nombre;
    std::string apellido;

public:
    // Constructor
    Cliente(int cod, const std::string& nom, const std::string& ape);

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

#endif // CLIENTE_H

