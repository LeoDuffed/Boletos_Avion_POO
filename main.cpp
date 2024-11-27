#include <iostream> 
#include "Avion.h"

int main(){

    Avion avionesArray [5]= {
        Avion ("Vuelo a Argentina", 20),
        Avion ("Vuelo a Colombia", 20),
        Avion ("Vuelo a Peru", 20),
        Avion ("Vuelo a Venezuela", 20),
        Avion ("Vuelo a Brasil", 20),
    };

    cout << "*---------------------------------*\n";
    cout << "|                                 |\n";
    cout << "|           Bien venido           |\n";
    cout << "|  Programa de compra de boletos  |\n";
    cout << "|                                 |\n";
    cout << "*---------------------------------*\n";
    
 int opcionesAcciones;
    do {
        cout << "\nVuelos: \n";
        cout << "\n1 = Vuelo a Argentina\n2 = Vuelo a Colombia\n3 = Vuelo a Peru\n4 = Vuelo a Venezuela\n5 = Vuelo a Brasil\n0 = Salir\n";
        cout << "\nIngrese eleccion: ";
        cin >> opcionesAcciones;

        if (opcionesAcciones >= 1 && opcionesAcciones <= 5) {
            int opcioBoleto;
            cout << "\n1 = Comprar boleto\n2 = Mostrar boletos\n0 = Salir\n";
            cout << "\nIngrese su eleccion: ";
            cin >> opcioBoleto;

            if (opcioBoleto == 1) {
                avionesArray[opcionesAcciones - 1].comprarBoleto();
            } else if (opcioBoleto == 2) {
                avionesArray[opcionesAcciones - 1].mostrarBoleto();
            } else if (opcioBoleto == 0) {
                cout << "\nSaliendo del menu del vuelo seleccionado.\n";
            } else {
                cout << "\nOpcion invalida.\n";
            }
        } else if (opcionesAcciones == 0) {
            cout << "\nSaliendo del programa.\n";
        } else {
            cout << "\nOpcion invalida.\n";
        }
    } while (opcionesAcciones != 0);
    return 0;
}    

