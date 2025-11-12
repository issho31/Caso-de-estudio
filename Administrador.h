#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Usuario.h"
#include "Sistema.h"

class Administrador : public Usuario {
public:
    Administrador(std::string nombre);
    void mostrarMenu() override;
    void verResumen(Sistema* sistema);
    void exportarReporte(Sistema* sistema, std::string archivo);
};

#endif