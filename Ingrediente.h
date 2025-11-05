#ifndef INGREDIENTE_H

#include <string>

class Ingrediente {
private:
    std::string nombre;
    std::string unidadMedida;
    double cantidadDisponible;
    double nivelMinimo;

public:
    Ingrediente(std::string nom, std::string unidad, double cantidad, double minimo);
    std::string getNombre() const;
    std::string getUnidad() const;
    double getCantidad() const;
    double getNivelMinimo() const;
    void setCantidad(double cantidad);
    bool consumir(double cantidad);
    bool estaDebajoDeMinimoStock() const;
};

#endif