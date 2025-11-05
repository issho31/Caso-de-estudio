#ifndef PANADERO_H
#define PANADERO_H

#include "Usuario.h"
// Error: falta #include "Sistema.h"

class Panadero : public Usuario {
public:
    Panadero(std::string nombre);
    void mostrarMenu() override;
    void registrarReceta(Sistema* sistema);
    void registrarProduccion(Sistema* sistema);
    void consultarStock(Sistema* sistema);
};

#endif