#ifndef USUARIO_H
#define USUARIO_H

#include <string>

/*
===============================================================================
                            CRC - USUARIO
===============================================================================
Clase:
    Usuario

Responsabilidades:
    - Definir estructura base para todos los tipos de usuario.
    - Almacenar nombre y tipo de usuario.
    - Declarar método virtual puro mostrarMenu() para polimorfismo.
    - Proveer acceso a nombre y tipo mediante getters.

Colaboradores:
    - Panadero 
    - EncargadoInventario 
    - Administrador
    - Controlador
===============================================================================
*/


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