#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {

    vector<int> v;
    int a;

    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar

    //"../archivos/interseccion1.in","../archivos/interseccion2.in","../archivos/out/ordenarSecuencia.out"    
    v = interseccion();
    return 0;
}

/*
    int a = 5;
    if( divide(v, a) )
        cout << a << " divide a todo el vector" << endl;
    else
        cout << a << " NO divide a todo el vector" << endl;
       

*/