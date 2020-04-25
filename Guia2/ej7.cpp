/*
Ejercicio 7. Implementar la función swap: void swap(int& a, int& b), que cumpla con la siguiente especificación:
    proc swap (inout a:Z, inout b:Z) {
    Pre {a = a 0 ∧ b = b 0 }
    Post {a = b 0 ∧ b = a 0 }
}

*/

#include <iostream>

void swap (int& a, int& b){

    int aux = a;

    a = b;
    b = aux; 
}

int main(void){

    int num_a = 0,
        num_b = 0;
    std::cout << "ingrese dos numeros distintos: " << std::endl;

    std::cin >> num_a;
    std::cin >> num_b;

    
    std::cout << "num_a "<< num_a << std::endl;
    std::cout << "num_b "<< num_b << std::endl;
 
    swap(num_a, num_b);

    std::cout << "num_a "<< num_a << std::endl;
    std::cout << "num_b "<< num_b << std::endl;
 
    return 0;
}