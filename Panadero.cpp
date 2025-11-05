#include "Panadero.h"
#include "Sistema.h"
#include "Vista.h"
#include <iostream>

Panadero::Panadero(std::string nombre) 
    : Usuario(nombre, "Panadero") {}

void Panadero::mostrarMenu() {
    std::cout << "\n=== MENU PANADERO ===" << std::endl;
    std::cout << "1. Registrar receta" << std::endl;
    std::cout << "2. Registrar produccion" << std::endl;
    std::cout << "3. Consultar stock de panes" << std::endl;
    std::cout << "0. Salir" << std::endl;
}

void Panadero::registrarReceta(Sistema* sistema) {
    std::string nombreReceta = Vista::leerString("Nombre de la receta: ");
    Receta* receta = new Receta(nombreReceta);
    
    int numIngredientes = Vista::leerEntero("Numero de ingredientes: ");
    for (int i = 0; i < numIngredientes; i++) {
        std::string ing = Vista::leerString("Ingrediente: ");
        double cant = Vista::leerDouble("Cantidad: ");
        receta->agregarIngrediente(ing, cant);
    }
    
    sistema->agregarReceta(receta);
    Vista::mostrarMensaje("Receta registrada exitosamente!");
}

void Panadero::registrarProduccion(Sistema* sistema) {
    std::string receta = Vista::leerString("Nombre de la receta: ");
    int cantidad = Vista::leerEntero("Cantidad a producir: ");
    
    if (sistema->registrarProduccion(receta, cantidad)) {
        Vista::mostrarMensaje("Produccion registrada!");
    } else {
        Vista::mostrarError("Error al registrar produccion");
    }
}

void Panadero::consultarStock(Sistema* sistema) {
    sistema->getInventario()->consultarStock();
}