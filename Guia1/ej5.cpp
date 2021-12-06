// Ejercicio 5. Escribir la función de Fibonacci que dado un entero n devuelve el n-ésimo 
// número de Fibonacci. 
// Los números de Fibonacci empiezan con F 0 = 0 y F 1 = 1. F n = F n−1 + F n−2
#include <iostream>


int fibo(int n){
    
    if (n==1)
        return 1;
    
    if (n == 0)
        return 0;

    return fibo(n-1)+ fibo(n-2);            
}

int main(){

    int num = 8;
    std::cout << "el fibonacci de "<< num << " es "<< fibo(num)<<std::endl;
    return 0;
}