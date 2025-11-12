#include "Sistema.h"
#include <iostream>

Sistema::Sistema() {
    inventario = new Inventario();
}

Sistema::~Sistema() {
    delete inventario;
    for (auto& par : recetas) {
        delete par.second;
    }
}

Inventario* Sistema::getInventario() {
    return inventario;
}

void Sistema::agregarReceta(Receta* receta) {
    recetas[receta->getNombre()] = receta;
}

Receta* Sistema::obtenerReceta(std::string nombre) {
    if (recetas.find(nombre) != recetas.end()) {
        return recetas[nombre];
    }
    return nullptr;
}

bool Sistema::eliminarReceta(std::string nombre) {
    auto it = recetas.find(nombre);
    if (it != recetas.end()) {
        delete it->second;
        recetas.erase(it);
        return true;
    }
    return false;
}

bool Sistema::registrarProduccion(std::string nombreReceta, int cantidad) {
    Receta* receta = obtenerReceta(nombreReceta);
    if (!receta) {
        return false;
    }

    auto ingredientesReceta = receta->getIngredientes();
    for (const auto& par : ingredientesReceta) {
        Ingrediente* ing = inventario->obtenerIngrediente(par.first);
        if (ing) {
            ing->consumir(par.second * cantidad);
        }
    }

    ProductoTerminado* producto = new ProductoTerminado(nombreReceta, cantidad);
    inventario->agregarProductoTerminado(producto);
    return true;
}

std::vector<std::string> Sistema::listarRecetas() {
    std::vector<std::string> lista;
    for (const auto& par : recetas) {
        lista.push_back(par.first);
    }
    return lista;
}