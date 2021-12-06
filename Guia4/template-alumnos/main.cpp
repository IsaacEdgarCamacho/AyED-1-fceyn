#include <iostream>
#include "cases.h"
#include <vector>
#include <math.h>

using namespace std;
/*
int main()
{

 bool res = asegurar(maximoComunDivisor(1,1), 1);
    res &= asegurar(maximoComunDivisor(1,2), 1);
    res &= asegurar(maximoComunDivisor(6,2), 2);
    res &= asegurar(maximoComunDivisor(17,19), 1);
    res &= as-egurar(maximoComunDivisor(100,0), 100);
    res &= asegurar(maximoComunDivisor(100,10), 10);
    res &= asegurar(maximoComunDivisor(28,56), 28);
    res &= asegurar(maximoComunDivisor(6,10), 2);
    res &= asegurar(maximoComunDivisor(-6,10), 2);
    res &= asegurar(maximoComunDivisor(10,-6), 2);
    res &= asegurar(maximoComunDivisor(0,1), 1);
    
    if (promedio(notas)) 
        cout << "perteneco " << endl; 
    else
    for (int i = 0; i < 9; i++)
        cout << " maximoComunDivisor " <<  maximoComunDivisor(0,1) << endl;

    return 0;
}
*/

int main()
{
    int exitos = 0;
    int total = 10;
    
    cout << "Test 01" << endl;
    exitos += test01_estaOrdenado() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 02" << endl;
    exitos += test02_esPrimo() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 03" << endl;
    exitos += test03_pertenece() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 04" << endl;
    exitos += test04_desvioEstandar() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 05" << endl;
    exitos += test05_fibonacci() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 06" << endl;
    exitos += test06_maximoComunDivisor() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 07" << endl;
    exitos += test07_sumaDoble() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 08" << endl;
    exitos += test08_cantPalabras() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 09" << endl;
    exitos += test09_valorMedio() ? 1 : 0;
    cout << "Exitos acumulados: " << exitos << endl; 
    cout << "Test 10" << endl;
    exitos += test10_fraccion() ? 1 : 0;

    cout << "# Ejercicios correctos:" << exitos << endl;
    cout << "# Ejercicios incorrectos: " << total - exitos << endl;
}

