/*
Ejercicio 4. Repetición controlada por un centinela y uso de acumuladores. Escriba un programa que reciba como entrada
un entero de tipo binario, conteniendo sólo 0s y 1s, para imprimir luego por pantalla el equivalente decimal. Se supone que
la entrada es válida respetando la premisa de los 0s y 1s. En forma parecida al sistema numérico decimal, donde el dı́gito
más a la derecha tiene un valor posicional de 1 y el siguiente dı́gito a la izquierda tiene un valor posicional de 10, después
100, después 1000, etc., en el sistema numérico binario, el dı́gito más a la derecha tiene un valor posicional de 1, el siguiente
dı́gito a la izquierda tiene un valor posicional de 2, luego 4, luego 8, etc. Ası́, el número decimal 432 se puede interpretar
como 4 * 100 + 3 * 10 + 2 * 1. El equivalente decimal del número binario 1010 es 0 * 1 + 1 * 2 + 0 * 4 + 1 * 8, o 0 + 2 +
0 + 8, o 10. Ayuda: use los operadores módulo y división para elegir los dı́gitos del número binario uno a la vez, de derecha
a izquierda.
*/

#include <iostream>

int main(void){

    int numeroBinario = 0;
    int numeroDecimal = 0;
    int multiploBinario = 1;
    int resto = 0;
    int posicion = 0;

    std::cout <<"ingrese un numero binario" << std::endl;
    std::cin >> numeroBinario;

    do{
        resto = numeroBinario % 10; //ultimo digito
        numeroBinario = numeroBinario / 10;
        
        numeroDecimal = numeroDecimal + (resto * multiploBinario);
        
        multiploBinario = multiploBinario * 2;
    }while(numeroBinario > 0);

    std::cout << "el numero decimal es : "<< numeroDecimal << std::endl;
    return 0;
}
