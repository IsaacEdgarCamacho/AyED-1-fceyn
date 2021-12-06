/*
Ejercicio 3. Repetición controlada por un centinela y uso de contadores. Modificar el ejercicio anterior de manera que cuente
la cantidad de alumnos que aprobaron y reprobaron el examen (nota mayor a 6). La cantidad de alumnos total no puede
ser menor a 6 (frente a este caso, mostrar un error por pantalla). En el caso de más de dos tercios de los alumnos hayan
aprobado, indicar por pantalla un mensaje que avise que se puede incrementar el número de plazas en el curso. 
*/


#include<iostream>

int main(void){

    int nota = 0;
    int sumaTotal = 0;
    int cantNotas = 0;
    int aprobados = 0;
    float promedio = 0.0f;
    
    std::cout << "ingrese las notas y -1 para terminar " << std::endl;
    std::cin >> nota;

    while(nota != -1){
        sumaTotal = sumaTotal + nota;
        cantNotas = cantNotas + 1;
        std::cin >> nota;

        if (nota != -1){
            if(nota > 6)
                aprobados = aprobados + 1;
        }
    }

    if (cantNotas < 6){
        std::cout << "la cantidad de alumnos no puede ser < 6 "<< std::endl;
        return 1;
    }
    
    if( (aprobados) > (2/3) * aprobados  ){
        std::cout << "se puede ampliar la cantidad de plazas "<< std::endl;
        return 1;
    }
    std::cout << "No se puede ampliar la cantidad de plazas "<< std::endl;
    
    return 0;
}
