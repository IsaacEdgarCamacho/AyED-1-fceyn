#include <iostream>

int main(){
    
    float x = 3.0;
    int y = 8, z;
    bool test;
    test = (x = 5) && (y < 10);

    if (test)
        std::cout << "fue verdadero";
    else
    {
        std::cout << "fue falso";
    }
    return 0;
}