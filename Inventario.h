#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Ingrediente.h"
#include "ProductoTerminado.h"
#include <map>
#include <string>
#include <vector>

/*
===============================================================================
                            CRC - INVENTARIO
===============================================================================
Clase:
    Inventario

Responsabilidades:
    - Gestionar colección de ingredientes mediante mapa.
    - Gestionar colección de productos terminados mediante mapa.
    - Agregar, obtener y eliminar ingredientes del inventario.
    - Agregar productos terminados al stock (consolidando duplicados).
    - Consultar y mostrar inventario actual de ingredientes.
    - Consultar y mostrar stock de productos terminados.
    - Verificar alertas de reposición.
    - Generar reporte completo del sistema.
    - Liberar memoria dinámica de ingredientes y productos en destructor.

Colaboradores:
    - Ingrediente
    - ProductoTerminado
    - Sistema
===============================================================================
*/

class Inventario {
private:
    std::map<std::string, Ingrediente*> ingredientes;
    std::map<std::string, ProductoTerminado*> stock;

public:
    Inventario();
    ~Inventario();
    void agregarIngrediente(Ingrediente* ing);
    Ingrediente* obtenerIngrediente(std::string nombre);
    bool eliminarIngrediente(std::string nombre);
    void consultarInventario();
    std::vector<std::string> verificarAlertasReposicion();
    void agregarProductoTerminado(ProductoTerminado* prod);
    void consultarStock();
    std::string generarReporte();
};

#endif