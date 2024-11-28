//
// Creado por Leonardo Martínez Peña
//

#include <iostream> 
#include "Avion.h"

int main(){

    Avion avionesArray [10]= {
        Avion ("Vuelo a Argentina", 20),
        Avion ("Vuelo a Colombia", 20),
        Avion ("Vuelo a Peru", 20),
        Avion ("Vuelo a Venezuela", 20),
        Avion ("Vuelo a Brasil", 20),
        Avion ("Auelo a Chile", 20),
        Avion ("Vuelo a Bolivia", 20), 
        Avion ("Vuelo a Urugüay", 20), 
        Avion ("Vuelo a Paragüay", 20), 
        Avion ("Vuelo a Ecuador", 20)
    };

    cout << "*-----------------------------------*\n";
    cout << "|                                   |\n";
    cout << "|             Bienvenido            |\n";
    cout << "|   Programa de compra de boletos   |\n";
    cout << "|                                   |\n";
    cout << "*-----------------------------------*\n";
    
 int opcionesAcciones;
    do {

        cout << "\n     ---Vuelos---\n";
        for (int i = 0; i < 10; i++ ){
            cout <<" "<< i + 1 << " = "<< avionesArray[i].getNombreVuelo()<< endl;
        }

        cout << "\n---Ingrese 0 para salir---\n";
        cout << "\n --> Ingrese eleccion: ";
        cin >> opcionesAcciones;

        if (opcionesAcciones >= 1 && opcionesAcciones <= 10) {
            int opcioBoleto;
            cout << "\n*-----------------------------------*";
            cout << "\n  Has ingresado a " << avionesArray[opcionesAcciones - 1].getNombreVuelo()<< endl;
            cout << "*-----------------------------------*\n";            
            cout << "\n1 = Comprar boleto\n2 = Mostrar boletos\n0 = Salir\n";
            cout << "\nIngrese su eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1) {
                avionesArray[opcionesAcciones - 1].comprarBoleto();
            } else if (opcioBoleto == 2) {
                avionesArray[opcionesAcciones - 1].mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo al menu.\n";
            } else {
                cout << "\nOpcion invalida.\n";
            }
        } else if (opcionesAcciones == 0) {
            cout << "\nSaliendo del programa...\n";
        } else {
            cout << "\nOpcion invalida.\n";
        }
    } while (opcionesAcciones != 0);
    return 0;
}    

