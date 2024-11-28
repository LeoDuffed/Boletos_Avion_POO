// 
// Creado por Leonardo Martínez Peña
//

#include "Boleto.h"
#include <iostream> 
using namespace std;

Boleto :: Boleto(){
    nombrePasajero = "";
    numeroAsiento = 0;
} 

Boleto :: Boleto(std :: string nombrePasajero, int numeroAsiento){
    this -> nombrePasajero = nombrePasajero;
    this -> numeroAsiento = numeroAsiento;
}

std :: string Boleto :: getNombrePasajero(){
    return nombrePasajero;
}

int Boleto :: getNumeroAsiento(){
    return numeroAsiento;
}

void Boleto :: setNombrePasajero(std :: string nombrePasajero){
    this -> nombrePasajero = nombrePasajero;
}

void Boleto :: setNumeroAsiento(int numeroAsiento){
    this -> numeroAsiento = numeroAsiento;
}

void Boleto :: mostrarBoleto(){
    cout << "\nPasajero: "<< nombrePasajero << "\nAsiento: "<<numeroAsiento << endl;

}

