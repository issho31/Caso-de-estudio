#include "Receta.h"

Receta::Receta(std::string nom) : nombre(nom) {}

std::string Receta::getNombre() const {
    return nombre;
}

void Receta::agregarIngrediente(std::string nombreIng, double cantidad) {
    // Error: no valida que la cantidad sea positiva
    ingredientes[nombreIng] = cantidad;
}

std::map<std::string, double> Receta::getIngredientes() const {
    return ingredientes;
}

void Receta::eliminarIngrediente(std::string nombreIng) {
    ingredientes.erase(nombreIng);
}