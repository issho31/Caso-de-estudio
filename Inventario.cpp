#include "Inventario.h"
#include <iostream>

Inventario::Inventario() {}

Inventario::~Inventario() {
    // Error: no libera la memoria de stock
    for (auto& par : ingredientes) {
        delete par.second;
    }
}

void Inventario::agregarIngrediente(Ingrediente* ing) {
    ingredientes[ing->getNombre()] = ing;
}

Ingrediente* Inventario::obtenerIngrediente(std::string nombre) {
    if (ingredientes.find(nombre) != ingredientes.end()) {
        return ingredientes[nombre];
    }
    return nullptr;
}

bool Inventario::eliminarIngrediente(std::string nombre) {
    auto it = ingredientes.find(nombre);
    if (it != ingredientes.end()) {
        delete it->second;
        ingredientes.erase(it);
        return true;
    }
    return false;
}

void Inventario::consultarInventario() {
    std::cout << "\n=== INVENTARIO DE INGREDIENTES ===" << std::endl;
    for (const auto& par : ingredientes) {
        std::cout << par.first << ": " << par.second->getCantidad() 
                  << " " << par.second->getUnidad() << std::endl;
    }
}

std::vector<std::string> Inventario::verificarAlertasReposicion() {
    std::vector<std::string> alertas;
    for (const auto& par : ingredientes) {
        if (par.second->estaDebajoDeMinimoStock()) {
            alertas.push_back(par.first);
        }
    }
    return alertas;
}

void Inventario::agregarProductoTerminado(ProductoTerminado* prod) {
    if (stock.find(prod->getTipo()) != stock.end()) {
        stock[prod->getTipo()]->agregarStock(prod->getCantidad());
        delete prod;
    } else {
        stock[prod->getTipo()] = prod;
    }
}

void Inventario::consultarStock() {
    std::cout << "\n=== STOCK DE PRODUCTOS TERMINADOS ===" << std::endl;
    for (const auto& par : stock) {
        std::cout << par.first << ": " << par.second->getCantidad() 
                  << " unidades" << std::endl;
    }
}

std::string Inventario::generarReporte() {
    std::string reporte = "=== REPORTE GENERAL ===\n\n";
    reporte += "INVENTARIO:\n";
    for (const auto& par : ingredientes) {
        reporte += par.first + ": " + std::to_string(par.second->getCantidad()) 
                   + " " + par.second->getUnidad() + "\n";
    }
    reporte += "\nSTOCK:\n";
    for (const auto& par : stock) {
        reporte += par.first + ": " + std::to_string(par.second->getCantidad()) 
                   + " unidades\n";
    }
    return reporte;
}