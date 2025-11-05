#include "Usuario.h"

Usuario::Usuario(std::string nom, std::string tip) 
    : nombre(nom), tipo(tip) {}

std::string Usuario::getNombre() const {
    return nombre;
}

std::string Usuario::getTipo() const {
    return tipo;
}