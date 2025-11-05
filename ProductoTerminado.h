#ifndef PRODUCTOTERMINADO_H
#define PRODUCTOTERMINADO_H

#include <string>

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