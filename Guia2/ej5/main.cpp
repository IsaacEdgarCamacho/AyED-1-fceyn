#include "./ej5.hpp"
#include <iostream>


int main(void){

    float radio = 0.0f;

    std::cout<<"ingrese el radio del circulo :" <<std::endl;
    std::cin >> radio;

    std::cout << "el diametro es: " << calcularDiametro(radio) << std::endl;
    std::cout << "la circunferencia es: " << calcularCircunferencia(radio) << std::endl;
    std::cout << "el área. es: " << calcularArea(radio) << std::endl;
 }