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
    delete usuarioActual;  
    // Correcion pequeña libera memoria del usuario
}

void Controlador::ejecutarMenu() {
    int opcion;
    do {
        Vista::limpiarPantalla();
        std::cout << "Usuario: " << usuarioActual->getNombre() 
                  << " (" << usuarioActual->getTipo() << ")" << std::endl;
        usuarioActual->mostrarMenu();
        opcion = Vista::leerEntero("\nSeleccione opcion: ");
        
        // Correcion opciones más completas para segun tipo de usuario
        if (Panadero* p = dynamic_cast<Panadero*>(usuarioActual)) {
            switch(opcion) {
                case 1: p->registrarReceta(sistema); break;
                case 2: p->registrarProduccion(sistema); break;
                case 3: p->consultarStock(sistema); break;
                case 0: Vista::mostrarMensaje("Hasta luego!"); break;
                default: Vista::mostrarError("Opcion invalida");
            }
        } else if (EncargadoInventario* e = dynamic_cast<EncargadoInventario*>(usuarioActual)) {
            switch(opcion) {
                case 1: e->registrarIngrediente(sistema); break;
                case 2: e->consultarInventario(sistema); break;
                case 3: e->verAlertas(sistema); break;
                case 4: e->verResumen(sistema); break;
                case 0: Vista::mostrarMensaje("Hasta luego!"); break;
                default: Vista::mostrarError("Opcion invalida");
            }
        } else if (Administrador* a = dynamic_cast<Administrador*>(usuarioActual)) {
            switch(opcion) {
                case 1: a->verResumen(sistema); break;
                case 2: {
                    std::string archivo = Vista::leerString("Nombre del archivo: ");
                    a->exportarReporte(sistema, archivo);
                    break;
                }
                case 0: Vista::mostrarMensaje("Hasta luego!"); break;
                default: Vista::mostrarError("Opcion invalida");
            }
        }
        
        if (opcion != 0) Vista::pausar();
    } while (opcion != 0);
}