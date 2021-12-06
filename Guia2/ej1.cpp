/*
Ejercicio 1. Repetición controlada por un contador. Escriba un programa que cargue y analice los resultados de los exámenes
de un curso de 10 estudiantes. Las clasificaciones son números enteros en el rango [0, 10] y deben ser cargadas por teclado
una a una, utilizando la función cin, vista la clase anterior. Muestre por pantalla la suma total de las calificaciones de todos
los estudiantes y el promedio de la clase para este examen (con decimales).
*/

#include <iostream>

int main(void){

    int nota = 0;
    int sumaTotal = 0;
    float promedio = 0.0f;

    std::cout << "ingresse las notas: " << std::endl;
    for (int i = 0; i < 10; i++){

        std::cin >> nota;
        sumaTotal = sumaTotal + nota;
    }    

    promedio = (float)sumaTotal / 10;

    std::cout << "la suma total es: "<< sumaTotal << " y el promedio es "<< promedio;
    return 0;
}