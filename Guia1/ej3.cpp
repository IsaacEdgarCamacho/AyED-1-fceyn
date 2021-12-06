
// Ejercicio 3. Modificar el programa anterior para que f tome dos parámetros x e y de tipo int y los sume sólo si x > y, en
// caso contrario el resultado será el producto.

#include <iostream>

int f(int x, int y){
    if (x > y) {
        return x+y;
    }else{
        return x*y;
    }
}

int main(){
    std::cout << "El resultado es: "<< f(11,30)<<std::endl;
    return 0;
}