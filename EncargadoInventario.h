#ifndef ENCARGADOINVENTARIO_H
#define ENCARGADOINVENTARIO_H

#include "Usuario.h"
#include "Sistema.h"

class EncargadoInventario : public Usuario {
public:
    EncargadoInventario(std::string nombre);
    void mostrarMenu() override;
    void registrarIngrediente(Sistema* sistema);
    void consultarInventario(Sistema* sistema);
    void verAlertas(Sistema* sistema);
    void verResumen(Sistema* sistema);
};

#endif