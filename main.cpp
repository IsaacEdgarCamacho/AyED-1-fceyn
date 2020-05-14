#include<iostream>

void prueba(int x, int &y) {

   x = x + y;

   y = x - y;

   x = x - y;

}

int main(void){

    int a = 4;
    prueba(a,a);
    std::cout << a << std::endl;
}