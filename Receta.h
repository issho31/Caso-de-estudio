#ifndef RECETA_H
#define RECETA_H

#include <string>
#include <map>

/*
===============================================================================
                            CRC - RECETA
===============================================================================
Clase:
    Receta

Responsabilidades:
    - Almacenar el nombre de una receta de pan.
    - Mantener un mapa de ingredientes con sus cantidades necesarias.
    - Agregar ingredientes a la receta.
    - Eliminar ingredientes de la receta.
    - Proveer información sobre los ingredientes y cantidades necesarias.

Colaboradores:
    - Sistema
    - Inventario
===============================================================================
*/


class Receta {
private:
    std::string nombre;
    std::map<std::string, double> ingredientes; // nombre -> cantidad

public:
    Receta(std::string nom);
    std::string getNombre() const;
    void agregarIngrediente(std::string nombreIng, double cantidad);
    std::map<std::string, double> getIngredientes() const;
    void eliminarIngrediente(std::string nombreIng);
};

#endif
