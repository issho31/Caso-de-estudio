#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Usuario.h"
#include "Sistema.h"

/*
===============================================================================
                            CRC - ADMINISTRADOR
===============================================================================
Clase:
    Administrador 

Responsabilidades:
    - Mostrar menú específico con opciones del administrador:
        * Ver resumen completo
        * Exportar reporte a archivo
    - Ver resumen completo del sistema:
        * Inventario de ingredientes
        * Stock de productos terminados
        * Alertas de reposición
    - Exportar reporte a archivo .txt:
        * Solicitar nombre del archivo
        * Escribir reporte completo
        * Confirmar exportación exitosa

Colaboradores:
    - Sistema
    - Vista
    - Inventario
===============================================================================
*/

class Administrador : public Usuario {
public:
    Administrador(std::string nombre);
    void mostrarMenu() override;
    void verResumen(Sistema* sistema);
    void exportarReporte(Sistema* sistema, std::string archivo);
};

#endif