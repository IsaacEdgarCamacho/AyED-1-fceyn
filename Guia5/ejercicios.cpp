#include "ejercicios.h"
#include<iostream>

// Ejercicio 1
bool existePico(vector<int> v){

	bool esPico = false;
	int tam = v.size();
	int i = 0;

	while (!esPico && i < tam){
		if(i != 0 && i != tam -1)
			if( v[i] > v[i+1] && v[i] > v[i-1])
		  		esPico = true;
		i++;
	}
	
	return esPico;
}

// Ejercicio 2

int maximo(int x, int y){
  if(x<0)
    x=-x;
  if(y<0)
    y=-y;
  if(x>y)
    return x;
  else
    return y;
}

int minimo(int x, int y){
  if(x<0)
    x=-x;

  if(y<0)
    y=-y;

  if(x<y)
    return x;
  else
    return y;
}

int mcd(int x, int y){
  int a = maximo(x,y);
  int b = minimo(x,y);
  int resto;
  bool hay_mcd = false;
  
  if (a == 0 )
    return b;
  if (b == 0)
    return a;

  resto = a%b;
  if (resto == 0)
    return b;
  int i = a;
  while(i > 0 && !hay_mcd){
    
    hay_mcd = ((a % i) == 0 ) && ((b % i)==0);
    if (hay_mcd)
        resto = i;

    i--;
  }
  return resto;
}


// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
	int posicion = 0;

	if (v.size() <= 1)
		return 0;
  
	
	posicion = l;
  int i=l;
	while ( i< r){
		if(v[i] < v[posicion])
			posicion = i;
      i++;
	}

	return posicion;
}

// Ejercicio 4
void ordenar1(vector<int>& v){
	
  vector<int> v2(v.size());
  int posMin = 0;
  
  if(v.size() < 2)
    return;
  
  int i = 0;
  while( i < v.size()){
    posMin = indiceMinSubsec(v, 0, v.size());
    v2[i] = v[posMin];
    v[posMin] = 1000;
    i++;
  }
  v = v2;
}

// Ejercicio 5
void ordenar2(vector<int>& v){

  vector<int> v2(v.size());
  int posMin = 0;
  
  if(v.size() < 2)
    return;
  
  int i = 0;
  while( i < v.size()){
    posMin = indiceMinSubsec(v, 0, v.size());
    v2[i] = v[posMin];
    v[posMin] = 1000;
    i++;
  }
  v = v2;
	return;
}

// Ejercicio 6
tuple<int,int> division(int n, int d){
  int p = 0;
  int q = 0;

  p = n / d;
  q = n % d;

  return make_tuple(p,q);
}
