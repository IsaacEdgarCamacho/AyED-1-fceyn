// Ejercicio 1: escribir un programa que sume uno a 10

#include <iostream>

int f(int x){
    return x+1;
}

int main(){

    std::cout << "El resultado es: " << f(10) << std::endl;
    return 0;   
}