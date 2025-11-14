#ifndef PANADERO_H
#define PANADERO_H

#include "Usuario.h"
#include "Sistema.h"

/*
===============================================================================
                            CRC - PANADERO
===============================================================================
Clase:
    Panadero

Responsabilidades:
    - Mostrar menú específico con opciones del panadero:
        * Registrar receta
        * Registrar producción
        * Consultar stock de productos
    - Registrar nuevas recetas solicitando ingredientes y cantidades.
    - Registrar producción de panes:
        * Seleccionar receta
        * Indicar cantidad a producir
        * Validar inventario disponible mediante Sistema
    - Consultar stock de productos terminados.

Colaboradores:
    - Sistema
    - Vista
    - Receta
===============================================================================
*/

class Panadero : public Usuario {
public:
    Panadero(std::string nombre);
    void mostrarMenu() override;
    void registrarReceta(Sistema* sistema);
    void registrarProduccion(Sistema* sistema);
    void consultarStock(Sistema* sistema);
};

#endif