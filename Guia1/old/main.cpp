#include <iostream>

int f (int x, int y ){
    if(x > y)
        return x + y;
    else
        return x * y;
    
}
bool esPrimo(int x){
    int resto = 1;
    int i = 2;

    while ((resto != 0) && (i < x)){
        resto = x % i;
        i++;
    }

    return (resto != 0);
}

int fiboRecur(int x){
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fiboRecur(x - 1) + fiboRecur(x - 2);
}

int fiboIter(int x){

    int n1 = 0,
        n2 = 1;
        
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;


    for(int i = 0; i < x-1; i++){
        n2 = n1 + n2;
        n1 = n2 - n1;    
    }
    return n2;
}

int sumaImparItera(int x){

    int acum = 0;

    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    for(int i = 0; i < x ; i++){
        
        if((i % 2)!= 0){
            acum = acum + i;
        }
        
    }
    return acum;
}

int impar(int n){

    if (n <= 0)
        return n;
    else if (n % 2 == 0)
            return impar(n - 1);
         else
            return n + impar(n - 1);
}

int sumaImparRecurs(int x){

    return impar(x-1);
}

int sumaDivisoresIter(int x){

    int divisores = 0;

    for(int i = 1; i <= x; i++){
        if((x % i) == 0 )
            divisores = divisores + i;
    }

    return divisores;
}

int divisoresHasta(int x, int limite){

     if (x < limite)
        if((limite % x) == 0)
            return x + divisoresHasta(x+1, limite);
        else
            return divisoresHasta(x+1, limite);
    

   return limite;
}

int sumaDivisoresRecurs(int x){

    if (x == 0)
        return 0;
    if (x == 1)
        return 1;

    return divisoresHasta(1, x);
}

int factorialRecurs(int x){

    if(x == 0)
        return 1;
    
    if (x == 1)
        return 1;
    
    return x * factorialRecurs(x - 1);
}

int combinatorio(int n, int k){
    if (k == 0)
        return 1;
    
    if (k == n)
        return 1;

    if (k == 1)
        return n;

    return combinatorio(n - 1 , k) + combinatorio(n - 1 , k - 1);
}

//factorialRecurs(n) / (factorialRecurs(k) * factorialRecurs(n-k));
int combinatorioIterativo(int n ,int k){

return 0;

}

int main () {
//    std :: cout << "El resultado es: " << f (1,20) << std :: endl ;
/*
    if (esPrimo(37))
        std::cout<< "es primo "<< std::endl;
    else
    {
        std::cout<< "no es primo "<< std::endl;
    }
 */
    std::cout<< combinatorio(7, 5) << std::endl;

    return 0;
}