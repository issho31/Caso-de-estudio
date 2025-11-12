#include "EncargadoInventario.h"
#include "Vista.h"
#include "Ingrediente.h"
#include <iostream>

EncargadoInventario::EncargadoInventario(std::string nombre)
    : Usuario(nombre, "Encargado de Inventario") {}

void EncargadoInventario::mostrarMenu() {
    std::cout << "\n=== MENU ENCARGADO DE INVENTARIO ===" << std::endl;
    std::cout << "1. Registrar ingrediente" << std::endl;
    std::cout << "2. Consultar inventario" << std::endl;
    std::cout << "3. Ver alertas de reposicion" << std::endl;
    std::cout << "4. Ver resumen" << std::endl;
    std::cout << "0. Salir" << std::endl;
}

void EncargadoInventario::registrarIngrediente(Sistema* sistema) {
    std::string nombre = Vista::leerString("Nombre del ingrediente: ");
    std::string unidad = Vista::leerString("Unidad de medida: ");
    double cantidad = Vista::leerDouble("Cantidad disponible: ");
    double minimo = Vista::leerDouble("Nivel minimo: ");
    
    Ingrediente* ing = new Ingrediente(nombre, unidad, cantidad, minimo);
    sistema->getInventario()->agregarIngrediente(ing);
    Vista::mostrarMensaje("Ingrediente registrado!");
}

void EncargadoInventario::consultarInventario(Sistema* sistema) {
    sistema->getInventario()->consultarInventario();
}

void EncargadoInventario::verAlertas(Sistema* sistema) {
    auto alertas = sistema->getInventario()->verificarAlertasReposicion();
    if (alertas.empty()) {
        Vista::mostrarMensaje("No hay alertas de reposicion");
    } else {
        std::cout << "\n=== ALERTAS DE REPOSICION ===" << std::endl;
        for (const auto& alerta : alertas) {
            std::cout << "- " << alerta << std::endl;
        }
    }
}

void EncargadoInventario::verResumen(Sistema* sistema) {
    std::cout << sistema->getInventario()->generarReporte() << std::endl;
}