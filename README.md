# Caso-de-estudio - El Buen Trigo 

## Descripción

Sistema que permite gestionar el inventario de ingredientes, recetas de panes, producción y stock de productos terminados.

**Tipos de Usuario:**
- Panadero
- Encargado de Inventario
- Administrador

## Funcionalidades

### Panadero
- Gestionar recetas
- Registrar producción
- Consultar stock

### Encargado de Inventario
- Gestionar ingredientes
- Ver alertas de reposición
- Consultar inventario

### Administrador
- Ver resumen general
- Exportar reportes

## Miembros

- Miembro 1: 
    - Frank Leonardo Silva Castillo - 2517614
- Miembro 2:
    - Juan Diego Quiñones Cometa - 2518501

## Compilación y Ejecución

```bash
# Compilar
make

# Ejecutar
./panaderia
```

O manualmente:
```bash
g++ -std=c++11 *.cpp -o panaderia
./panaderia
```