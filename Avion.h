//
// Creado por Leonardo Martínez Peña
//

#ifndef AVION_H
#define AVION_H
#include <iostream> 
#include "Boleto.h"
using namespace std;

class Avion{
    private: 
    std :: string nombreVuelo;
    Boleto boletos [20];
    int capacidadMaxima;
    int boletosVendidos;
    public: 
    Avion();
    ~Avion(){}
    Avion(std :: string nombreVuelo, int capacidadMaxima);
    std :: string getNombreVuelo();
    int getCapacidadMaxima();
    void setNombreVuelo(std :: string nombreVuelo);
    void setCapacidadMaxima(int capacidadMaxima);
    void comprarBoleto();
    void mostrarBoleto();

};

#endif // AVION_H