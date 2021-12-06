// Ejercicio 4. Escribir la función que dado n ∈ N devuelve una variable booleana con el valor true si es primo. Recuerden
// que un número es primo si los únicos divisores que tiene son 1 y él mismo.
#include <iostream>

bool esPrimo(int x){

    int i = 2;

    while (i < x && (x % i) != 0){
        i++;
    }
    return i == x;
}

int main(){
    int num = 12;

    if(esPrimo(num) == true)
        std::cout << "el número " << num << " es primo" << std::endl;
    else
        std::cout << "el número " << num << " no es primo" << std::endl;
    
    return 0;
}
