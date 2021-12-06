// Ejercicio 2. Modificar el programa anterior para que f tome dos parámetros de tipo int y los sume.

#include <iostream>

int f(int x, int y){
    return x+y;
}

int main(){

    std::cout << "El resultado es: " << f(10,11) << std::endl;
    return 0;
}