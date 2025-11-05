#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
protected:
    std::string nombre;
    std::string tipo;

public:
    Usuario(std::string nom, std::string tip);
    virtual ~Usuario() = default;
    virtual void mostrarMenu() = 0;
    std::string getNombre() const;
    std::string getTipo() const;
};

#endif