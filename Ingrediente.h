#ifndef INGREDIENTE_H
#define INGREDIENTE_H 

#include <string>

/*
===============================================================================
                            CRC - INGREDIENTE
===============================================================================
Clase:
    Ingrediente

Responsabilidades:
    - Almacenar información de un ingrediente:
        * nombre
        * unidadMedida
        * cantidadDisponible
        * nivelMinimo
    - Controlar el consumo de cantidad disponible validando suficiencia.
    - Verificar si la cantidad está debajo del nivel mínimo de stock.
    - Actualizar cantidad disponible.
    - Proveer acceso a los datos mediante métodos getters.

Colaboradores:
    - Inventario
===============================================================================
*/



class Ingrediente {
private:
    std::string nombre;
    std::string unidadMedida;
    double cantidadDisponible;
    double nivelMinimo;

public:
    Ingrediente(std::string nom, std::string unidad, double cantidad, double minimo);
    std::string getNombre() const;
    std::string getUnidad() const;
    double getCantidad() const;
    double getNivelMinimo() const;
    void setCantidad(double cantidad);
    bool consumir(double cantidad);
    bool estaDebajoDeMinimoStock() const;
};

#endif