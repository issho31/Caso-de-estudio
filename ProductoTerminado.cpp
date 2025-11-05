#include "ProductoTerminado.h"

ProductoTerminado::ProductoTerminado(std::string tipo, int cant)
    : tipoProducto(tipo), cantidad(cant) {}

std::string ProductoTerminado::getTipo() const {
    return tipoProducto;
}

int ProductoTerminado::getCantidad() const {
    return cantidad;
}

void ProductoTerminado::agregarStock(int cant) {
    cantidad += cant;
}

bool ProductoTerminado::reducirStock(int cant) {
    if (cantidad >= cant) {
        cantidad -= cant;
        return true;
    }
    return false;
}