#include "Controlador.h"
#include "Vista.h"
#include "Panadero.h"
#include "EncargadoInventario.h"
#include "Administrador.h"
#include <iostream>

Controlador::Controlador() {
    sistema = new Sistema();
    usuarioActual = nullptr;
}

Controlador::~Controlador() {
    delete sistema;
}

void Controlador::iniciar() {
    Vista::mostrarMensaje("Bienvenido a El Buen Trigo");
    seleccionarUsuario();
    ejecutarMenu();
}

void Controlador::seleccionarUsuario() {
    Vista::limpiarPantalla();
    std::cout << "\n=== SELECCION DE USUARIO ===" << std::endl;
    std::cout << "1. Panadero" << std::endl;
    std::cout << "2. Encargado de Inventario" << std::endl;
    std::cout << "3. Administrador" << std::endl;
    
    int opcion = Vista::leerEntero("Seleccione tipo de usuario: ");
    std::string nombre = Vista::leerString("Ingrese su nombre: ");
    
    switch(opcion) {
        case 1:
            usuarioActual = new Panadero(nombre);
            break;
        case 2:
            usuarioActual = new EncargadoInventario(nombre);
            break;
        case 3:
            usuarioActual = new Administrador(nombre);
            break;
        default:
            Vista::mostrarError("Opcion invalida");
            seleccionarUsuario();
    }
}

void Controlador::ejecutarMenu() {
    int opcion;
    do {
        Vista::limpiarPantalla();
        std::cout << "Usuario: " << usuarioActual->getNombre() 
                  << " (" << usuarioActual->getTipo() << ")" << std::endl;
        usuarioActual->mostrarMenu();
        opcion = Vista::leerEntero("\nSeleccione opcion: ");
        
        if (opcion == 0) {
            Vista::mostrarMensaje("Hasta luego!");
        } else {
            Vista::mostrarError("Funcionalidad en desarrollo");
        }
        
        if (opcion != 0) Vista::pausar();
    } while (opcion != 0);
}