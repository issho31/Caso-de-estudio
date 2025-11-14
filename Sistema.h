#ifndef SISTEMA_H
#define SISTEMA_H

#include "Inventario.h"
#include "Receta.h"
#include <map>
#include <vector>

/*
===============================================================================
                            CRC - SISTEMA
===============================================================================
Clase:
    Sistema

Responsabilidades:
    - Coordinar las operaciones principales del sistema.
    - Crear y gestionar instancia única de Inventario.
    - Gestionar colección de recetas (agregar, obtener, eliminar, listar).
    - Registrar producción de panes:
        * Validar existencia de receta
        * Verificar disponibilidad de ingredientes ANTES de consumir
        * Consumir ingredientes del inventario
        * Agregar productos terminados al stock
    - Proveer acceso al inventario mediante getter.
    - Liberar memoria dinámica de inventario y recetas en destructor.

Colaboradores:
    - Inventario
    - Receta
    - ProductoTerminado
    - Controlador
===============================================================================
*/

class Sistema {
private:
    Inventario* inventario;
    std::map<std::string, Receta*> recetas;

public:
    Sistema();
    ~Sistema();
    Inventario* getInventario();
    void agregarReceta(Receta* receta);
    Receta* obtenerReceta(std::string nombre);
    bool eliminarReceta(std::string nombre);
    bool registrarProduccion(std::string nombreReceta, int cantidad);
    std::vector<std::string> listarRecetas();
};

#endif