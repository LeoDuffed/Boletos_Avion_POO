//
// Creado por Leonardo Martínez Peña
//

#ifndef BOLETO_H
#define BOLETO_H
#include <iostream> 
using namespace std;

class Boleto{
    private: 
    std :: string nombrePasajero;
    int numeroAsiento;
    public: 
    Boleto();
    ~Boleto(){}
    Boleto(std :: string nombrePasajero, int numeroAsientos);
    std :: string getNombrePasajero();
    int getNumeroAsiento();
    void setNombrePasajero(std :: string nombrePasajero);
    void setNumeroAsiento(int numeroAsiento);
    void mostrarBoleto();
};

#endif // BOLETO_H