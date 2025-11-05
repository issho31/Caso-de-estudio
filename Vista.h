#ifndef VISTA_H
#define VISTA_H

#include <string>

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