#ifndef ENCARGADOINVENTARIO_H
#define ENCARGADOINVENTARIO_H

#include "Usuario.h"
#include "Sistema.h"

/*
===============================================================================
                            CRC - ENCARGADOINVENTARIO
===============================================================================
Clase:
    EncargadoInventario

Responsabilidades:
    - Mostrar menú específico con opciones del encargado de inventario:
        * Registrar ingrediente
        * Consultar inventario
        * Ver alertas de reposición
        * Ver resumen general
    - Registrar nuevos ingredientes con unidad, cantidad y nivel mínimo.
    - Consultar inventario actual de todos los ingredientes.
    - Ver alertas de reposición.
    - Ver resumen general del sistema (inventario y stock).

Colaboradores:
    - Sistema
    - Vista
    - Ingrediente 
    - Inventario
===============================================================================
*/

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