/*
Ejercicio 6. Pasaje por valor y referencia. Escriba un programa completo en C++ con las dos funciones alternativas que se
especifican a continuación, de las cuales cada una simplemente triplica la variable cuenta definida en main. Después compare
y contraste ambos métodos. Estas dos funciones son:
1. la función triplicarPorValor, que pasa una copia de cuenta por valor, triplica la copia y devuelve el nuevo valor,
2. la función triplicarPorReferencia, que pasa cuenta por referencia a través de un parámetro por referencia y triplica el
valor original de cuenta a través de su alias (es decir, el parámetro por referencia).
*/

#include<iostream>



int  triplicarPorValor(int cuenta){
    return cuenta = 3 * cuenta;
}

void triplicarPorReferencia(int& cuenta){

    cuenta = 3 * cuenta;
}


int main(void){

    int num = 0;

    std::cout << "ingrese un entero :";
    std::cin >> num ;

    std::cout << "el triple por valor es: " << triplicarPorValor(num) << std::endl;
    triplicarPorReferencia (num);
    std::cout << "el triple por referencia es: " << num << std::endl;

    return 0;
}