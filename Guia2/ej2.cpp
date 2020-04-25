/*
Ejercicio 2. Repetición controlada por un centinela. Modificar el programa anterior para que el número de estudiantes sea
arbitrario. Por ejemplo: Ingrese la nota (-1 para terminar):
*/
#include<iostream>

int main(void){

    int nota = 0;
    int sumaTotal = 0;
    int cantNotas = 0;
    float promedio = 0.0f;
    
    std::cout << "ingrese las notas y -1 para terminar " << std::endl;
    std::cin >> nota;

    while(nota != -1){
        sumaTotal = sumaTotal + nota;
        cantNotas = cantNotas + 1;
        std::cin >> nota;
    }

    if (cantNotas > 0)
        promedio =(float) sumaTotal / cantNotas;

    std::cout<< "la sumta total es :" << sumaTotal << std::endl;
    std::cout<< "el promedio es :" << promedio << std::endl;
    return 0;
}