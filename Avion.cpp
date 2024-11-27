#include "Avion.h"
#include <iostream> 
using namespace std;

Avion :: Avion(){
    nombreVuelo = "";
    capacidadMaxima = 0;
    boletosVendidos = 0;
}

Avion :: Avion (std :: string nombreVuelo, int capacidadMaxima){
    this -> nombreVuelo = nombreVuelo;
    this -> capacidadMaxima = capacidadMaxima;
    boletosVendidos = 0;
}

std :: string Avion :: getNombreVuelo(){
    return nombreVuelo;
}

int Avion :: getCapacidadMaxima(){
    return capacidadMaxima;
}

void Avion :: setNombreVuelo(std :: string nombreVuelo){
    this -> nombreVuelo = nombreVuelo;
}

void Avion :: setCapacidadMaxima(int capacidadMaxima){
    this -> capacidadMaxima = capacidadMaxima;
}

void Avion :: comprarBoleto(){
    if (boletosVendidos < capacidadMaxima){
        cout << "Ingresaste a "<< nombreVuelo << endl;
        string nombrePasajero;
        cout << "Ingrese el nombre del pasajero: ";
        cin.ignore();
        getline(cin, nombrePasajero);


        int numeroAsiento = boletosVendidos + 1;
        boletos[boletosVendidos] = Boleto(nombrePasajero, numeroAsiento);
        boletosVendidos ++;

        cout << "Boleto comprado con exito para: " << nombrePasajero << " en el asiento: "<< numeroAsiento << endl;
    } else {
        cout << "Lo sentimos, el vuelo esta lleno";
    }
}

void Avion :: mostrarBoleto(){
    if (boletosVendidos == 0){
        cout << "\nNo se han vendido boletos para el vuelo "<< nombreVuelo << endl;

    } else {
        cout << "\nBoletos para "<< nombreVuelo << ":\n"<< endl;
        for (int i = 0; i < boletosVendidos;  i ++){
            boletos[i].mostrarBoleto();
        }
    }
}