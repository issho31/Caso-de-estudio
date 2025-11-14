#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Sistema.h"
#include "Usuario.h"

/*
===============================================================================
                            CRC - CONTROLADOR
===============================================================================
Clase:
    Controlador

Responsabilidades:
    - Coordinar el flujo principal del programa.
    - Crear y gestionar instancia única de Sistema.
    - Gestionar usuario actual del sistema.
    - Iniciar la aplicación mostrando bienvenida.
    - Permitir selección de tipo de usuario:
        * Panadero
        * Encargado de Inventario
        * Administrador
    - Ejecutar menú correspondiente según tipo de usuario.
    - Delegar operaciones específicas a clases de usuario usando polimorfismo.
    - Usar dynamic_cast para identificar tipo de usuario en ejecución.
    - Liberar memoria dinámica de Sistema y Usuario en destructor.

Colaboradores:
    - Sistema
    - Usuario 
    - Panadero
    - EncargadoInventario
    - Administrador
    - Vista
===============================================================================
*/
class Controlador {
private:
    Sistema* sistema;
    Usuario* usuarioActual;

public:
    Controlador();
    ~Controlador();
    void iniciar();
    void seleccionarUsuario();
    void ejecutarMenu();
};

#endif