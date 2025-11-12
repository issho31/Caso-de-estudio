#include "Ingrediente.h"

Ingrediente::Ingrediente(std::string nom, std::string unidad, double cantidad, double minimo)
    : nombre(nom), unidadMedida(unidad), cantidadDisponible(cantidad), nivelMinimo(minimo) {}

std::string Ingrediente::getNombre() const {
    return nombre;
}

std::string Ingrediente::getUnidad() const {
    return unidadMedida;
}

double Ingrediente::getCantidad() const {
    return cantidadDisponible;
}

double Ingrediente::getNivelMinimo() const {
    return nivelMinimo;
}

void Ingrediente::setCantidad(double cantidad) {
    cantidadDisponible = cantidad;
}

bool Ingrediente::consumir(double cantidad) {
    if (cantidadDisponible >= cantidad) {
        cantidadDisponible -= cantidad;
        return true;
        //Cambio para verificar antes de consumir
    }
    return false;
}

bool Ingrediente::estaDebajoDeMinimoStock() const {
    return cantidadDisponible < nivelMinimo;
}