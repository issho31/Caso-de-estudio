#ifndef RECETA_H
#define RECETA_H

#include <string>
#include <map>

class Receta {
private:
    std::string nombre;
    std::map<std::string, double> ingredientes; // nombre -> cantidad

public:
    Receta(std::string nom);
    std::string getNombre() const;
    void agregarIngrediente(std::string nombreIng, double cantidad);
    std::map<std::string, double> getIngredientes() const;
    void eliminarIngrediente(std::string nombreIng);
};

#endif