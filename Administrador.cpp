#include "Administrador.h"
#include "Vista.h"
#include <iostream>
#include <fstream>

Administrador::Administrador(std::string nombre)
    : Usuario(nombre, "Administrador") {}

void Administrador::mostrarMenu() {
    std::cout << "\n=== MENU ADMINISTRADOR ===" << std::endl;
    std::cout << "1. Ver resumen" << std::endl;
    std::cout << "2. Exportar reporte" << std::endl;
    std::cout << "0. Salir" << std::endl;
}

void Administrador::verResumen(Sistema* sistema) {
    std::cout << sistema->getInventario()->generarReporte() << std::endl;
}

void Administrador::exportarReporte(Sistema* sistema, std::string archivo) {
    std::ofstream file(archivo);
    file << sistema->getInventario()->generarReporte();
    file.close();
    Vista::mostrarMensaje("Reporte exportado a " + archivo);
}