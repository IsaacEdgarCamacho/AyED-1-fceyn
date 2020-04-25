/*
Ejercicio 5. Pasaje por valor y referencia. Escriba y utilice en un programa una función que reciba el radio de un cı́rculo
(como un valor float), calcule e imprima el diámetro, la circunferencia y el área. Use el valor 3.14159 para π. Estos valores
deben ser mostrados en pantalla desde el programa principal (main.cpp).
*/

#include "./ej5.hpp"

float calcularDiametro(float radio){

    return  2 * radio;
}


float calcularCircunferencia(float radio){

    return PI * calcularDiametro(radio);
}


float calcularArea(float radio){

    return PI * (radio * radio);
}