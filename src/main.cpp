
#include <iostream>
#include "Montacargas.h"

using namespace std;

int main() {

    Montacargas unMontacargas(4500);

    unMontacargas.cargar(2000);
    unMontacargas.descargar();

    unMontacargas.cargar(1000);
    unMontacargas.descargar();

    unMontacargas.cargar(3000);

    cout << "El montacargas está cargado con "
         << unMontacargas.obtenerCarga()
         << " Kg y pude llegar a cargar hasta "
         << unMontacargas.obtenerCargaMaximaSoportada()
         << " Kg"
         << endl;

    cout << "Tiene un promedio de "
         << unMontacargas.obtenerCargaPromedio()
         << " Kg por carga"
         << endl;
}
