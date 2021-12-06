#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "anagramas.h"
using namespace std;

int main(){
    string palabra, palabra2;
    cout << "Ingrese una palabra en ingles con letras en minuscula:" << endl;
    cin >> palabra;

    ifstream dicci ("ingles.dic");
    vector<string> listaPalabras;
    string word;
    while(getline(dicci, word)){
        listaPalabras.push_back(word);
    }
    int cantidadAnagrama = 0;
    for (int i = 0; i < listaPalabras.size(); ++i)
    {
        if (esAnagrama1(listaPalabras[i], palabra)) {
            cout << "Son anagramas: " << listaPalabras[i] << " y " << palabra << endl;
            cantidadAnagrama++;
        }
    }
    cout << "La cantidad de anagramas es: " << cantidadAnagrama << endl;
    return 0;
}

bool esAnagrama(string p1, string p2){
    // CAMBIAR AQUI QUE IMPLEMENTACION USAR
    return esAnagrama1(p1,p2);
}

bool esAnagrama1(string p1, string p2){
    //devuelve true sii p1 es anagrama de p2
    //esta versión usa ordenar
    ordenarString(p1);
    ordenarString(p2);
    return p1 == p2;
}

bool esAnagrama2(string p1, string p2){
    //COMPLETAR
    //devuelve true sii p1 es anagrama de p2
    //esta versión usa el mapeo de letras a números primos. Utilizar charToPrimo()

	return true;
}

void swap (string &s, int a, int b){
    int c = s[a];
    s[a] = s[b];
    s[b] = c; 
}

void insert(string &s, int i) {
	for(int j=i; j>0 && s[j] > s[j-1]; j--) {
		swap(s, j, j-1);
	}
}
void insertionSort(string &arr) {
	for(int i=0; i<arr.size(); i++) {
		insert(arr,i);
	}
}
void ordenarString(string &palabra){
    insertionSort(palabra);
}

int charToPrimo(char c){
    //COMPLETAR
    //Dado una letra minuscula de a-z (sin enie) devolver el numero primo correspondiente.

	return 0;
}

int posicionEnAlfabeto(char c){
    return c - 'a';
}
