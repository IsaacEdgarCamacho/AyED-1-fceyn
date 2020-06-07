/*
Ejercicio 9. Implementar la función division que cumpla con la siguiente especificación:

proc division (in dividendo Z, in divisor Z, out cociente:Z, out resto:Z) {
Pre {dividendo ≥ 0 ∧ divisor > 0}
Post {dividendo = divisor ∗ cociente + resto ∧ 0 ≤ resto < divisor}
}
Resolver este ejercicio en versiones iterativa y recursiva.
*/

#include<iostream>

void division (int dividendo, int divisor, int& cociente,int& resto);

int main(void){

    int a = 0,
        b = 0;
    int resultado = 0,
        resto = 0;

    std::cout << "ingrese dos numeros enteros :";
    std::cin >> a >> b;

    division(a,b, resultado, resto);
    std::cout << "los parametros son " << a << b  << std::endl;
    std::cout << "resultado: " << resultado << std::endl;
    std::cout << "resto: " << resto << std::endl;
    //test
    if(a == (resultado * b) + resto)
        std::cout << "el test paso" << std::endl;
    else
        std::cout << "el test no paso" << std::endl;

}


void division (int dividendo, int divisor, int& cociente,int& resto){

    if(dividendo == 0 || divisor <= 0){
        std::cout << "no se cumple con la precondicion" << std::endl;
    }
    else{
        resto = dividendo % divisor;
        cociente = dividendo / divisor;
    }
}



