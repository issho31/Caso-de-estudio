#ifndef PRODUCTOTERMINADO_H
#define PRODUCTOTERMINADO_H

#include <string>

/*
===============================================================================
                            CRC - PRODUCTOTERMINADO
===============================================================================
Clase:
    ProductoTerminado

Responsabilidades:
    - Almacenar el tipo de producto terminado (tipo de pan).
    - Mantener la cantidad en stock del producto.
    - Agregar unidades al stock tras producción.
    - Reducir unidades del stock validando disponibilidad.
    - Garantizar que la cantidad no sea negativa.

Colaboradores:
    - Inventario
===============================================================================
*/


class ProductoTerminado {
private:
    std::string tipoProducto;
    int cantidad;

public:
    ProductoTerminado(std::string tipo, int cant);
    std::string getTipo() const;
    int getCantidad() const;
    void agregarStock(int cant);
    bool reducirStock(int cant);
};

#endif