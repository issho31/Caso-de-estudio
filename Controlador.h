#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Sistema.h"
#include "Usuario.h"

class Controlador {
private:
    Sistema* sistema;
    Usuario* usuarioActual;

public:
    Controlador();
    ~Controlador();
    void iniciar();
    void seleccionarUsuario();
    void ejecutarMenu();
};

#endif