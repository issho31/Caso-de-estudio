#include "Vista.h"
#include <iostream>

void Vista::mostrarMensaje(std::string mensaje) {
    std::cout << "\n[INFO] " << mensaje << std::endl;
}

void Vista::mostrarError(std::string error) {
    std::cout << "\n[ERROR] " << error << std::endl;
}

int Vista::leerEntero(std::string prompt) {
    int valor;
    std::cout << prompt;
    // Error: no valida que la entrada sea realmente un entero
    std::cin >> valor;
    return valor;
}

double Vista::leerDouble(std::string prompt) {
    double valor;
    std::cout << prompt;
    std::cin >> valor;
    return valor;
}

std::string Vista::leerString(std::string prompt) {
    std::string valor;
    std::cout << prompt;
    std::cin.ignore();
    std::getline(std::cin, valor);
    return valor;
}

void Vista::limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void Vista::pausar() {
    std::cout << "\nPresione Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}