#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Ingrediente.h"
#include "ProductoTerminado.h"
#include <map>
#include <string>
#include <vector>

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