#ifndef VISTA_H
#define VISTA_H

#include <string>

/*
===============================================================================
                            CRC - VISTA
===============================================================================
Clase:
    Vista

Responsabilidades:
    - Mostrar mensajes informativos al usuario.
    - Mostrar mensajes de error al usuario.
    - Leer entrada de enteros del usuario.
    - Leer entrada de números decimales (double) del usuario.
    - Leer entrada de cadenas de texto (string) del usuario.
    - Limpiar la pantalla
    - Pausar la ejecución esperando Enter del usuario.

Colaboradores:
    - Panadero
    - EncargadoInventario
    - Administrador
    - Controlador
===============================================================================
*/

class Vista {
public:
    static void mostrarMensaje(std::string mensaje);
    static void mostrarError(std::string error);
    static int leerEntero(std::string prompt);
    static double leerDouble(std::string prompt);
    static std::string leerString(std::string prompt);
    static void limpiarPantalla();
    static void pausar();
};

#endif