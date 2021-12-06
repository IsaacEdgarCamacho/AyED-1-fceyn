#include "ejercicios.h"
#include "time.h"
#include <ctime>
#include "stdlib.h"
#include <string>
#include<iostream>

using namespace std;

int busquedaBinaria(vector<int> v, int x)
{
    int first = 0;
    int middle;
    int last = v.size() - 1;
 

    
    while (first <= last) {
        middle = (first + last) / 2;
 
        if (x == v[middle]) {
            cout << "Se encuentra en la posición " << middle + 1 << endl;
            return middle;
        } else {
            if (v[middle] > x) {
                last = middle - 1;
            } else {
                first = middle + 1;
            }
        }
    }
    return -1;
}

// int busquedaBinaria(vector<int> v, int x){
// 	return 0;
// }

// int busquedaBinaria(vector<int> s, int x) {
//     int result = -1;

//     if (s.size() == 0) {
//         return -1;
//     } else if (s.size() == 1) {
//         if (s[0] == x )return 0; 
//     } else if (x <= s[0]) {
//         if( s[0] == x) return 0;
//     } else if (x >= s[s.size() - 1]) {
//         if (s[s.size() - 1] == x) return s.size() - 1;

//     } else {
//         int low = 0;
//         int high = s.size() - 1;
//         while (low + 1 < high) {
//             int mid = (low + high) / 2;
//             if (s[mid] <= x) {
//                 low = mid;
//             } else {
//                 high = mid;
//             }
//         }
        
//         if (s[low] == x)
//             result = low;

//     }
//     return result;
// }

int busquedaJumpSearch(vector<int> v, int x){
	return -1;
}

int buscar(vector<int> v, int x){
    return busquedaBinaria(v, x);
    //return busquedaJumpSearch(v, x);
}


double ejemplo_como_calcular_tiempos() {
    clock_t begin = clock();

    for(int i=0 ; i < 100000; i++){
        // nada
    }

    clock_t end = clock();
    double elapsed_msecs = double(end - begin) / CLOCKS_PER_SEC  * 1000; // mide el tiempo en milisegundos
    return elapsed_msecs;
}

vector<int> construir_vector(int size, string mode){
    vector<int> res {};
    time_t t;
    srand((unsigned) time(&t));
    int base = rand() % 100;
    int step;
    for(int i = 0; i < size; i++){
        step = rand() % 100;
        if(mode == "asc") {
            res.push_back(base+step);
            base += step;
        }
        if(mode == "desc"){
            res.push_back(base-step);
            base -= step;
        }
        if(mode == "azar"){
            res.push_back(step);
        }
        if(mode == "iguales"){
            res.push_back(base);
        }
    }
    return res;
}



int indicePico(vector<int> v){
	return -1;
}




int puntoFijo(vector<int> v){
    int i= 0;
    int result = -1;
    while (i < v.size() && v[i]!=i){
        i++;
    }

    if (v[i]==i)
        result = i;
	return result;
}




int encontrarRotado(vector<int> v, int x){
	return -1;
}

int menorMasGrande(vector<int> v, int x){
    int i= 0;
    int result = -1;
    while (i < v.size() && x > v[i]){
        i++;
    }

    if (i < v.size())
        result = i;
	return result;
}

vector<int> masCercanoK(vector<int> v, int k,  int x){
	return {};
}
