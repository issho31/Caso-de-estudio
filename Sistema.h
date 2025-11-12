#ifndef SISTEMA_H
#define SISTEMA_H

#include "Inventario.h"
#include "Receta.h"
#include <map>
#include <vector>

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