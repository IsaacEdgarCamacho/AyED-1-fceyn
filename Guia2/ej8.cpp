 /*
Ejercicio 8. La conjetura de Collatz dice que dado un número natural n y el proceso que describimos a continuación, sin
importar cuál sea el número original, provocará que la serie siempre termine en 1. El proceso:
Si n es par lo dividimos por 2
Si n es impar lo multiplicamos por 3 y le sumamos 1 al resultado

En este ejercicio, supondremos que la conjetura es cierta y se pide implementar una función que devuelva la cantidad de
pasos que se realizan desde el número original hasta llegar a 1 y que muestre en la salida estándar la sucesión de números
por la que pasa. Ejemplo: si calculamos collatz de 11, la cantidad de pasos es 15 y la sucesión es 11 34 17 52 26 13 40 20 10
5 16 8 4 2 1
Resolver este ejercicio utilizando el siguiente encabezado para la función.
void collatz(int n, int& cantPasos)
Implementar en versiones iterativa y recursiva.
*/


#include<iostream>


void collatzIterativo(int n, int& cantPasos);
void collatzRecursivo(int n, int& cantPasos);


int main(void){

    int numero = 0;
    int cantPasos = 1;

    std::cout <<"ingrese un numero entero :" << std::endl;
    std::cin >> numero;

    collatzIterativo(numero, cantPasos);
    std::cout << std::endl << "numero de pasos :" << cantPasos << std::endl;
    cantPasos = 1;
    collatzRecursivo(numero, cantPasos);
    std::cout << std::endl << "numero de pasos :" << cantPasos << std::endl;
    return 0;
}


void collatzIterativo(int n, int& cantPasos){

    while (n > 1){

        if((n % 2) == 0){
            n = n / 2;
            std::cout << n << " ";
            cantPasos++;
        }
        else{
            n = (n*3) + 1;
            std::cout << n << " ";
            cantPasos++;    
        }
    };
}

void collatzRecursivo(int n, int& cantPasos){

    if( n > 1 )
        if( (n % 2) == 0){
            cantPasos++;
            std::cout << n << " ";
            collatzRecursivo((n/2), cantPasos);
        }
        else{
            cantPasos++;
            std::cout << n << " ";
            collatzRecursivo((n*3)+1, cantPasos);
        }
}