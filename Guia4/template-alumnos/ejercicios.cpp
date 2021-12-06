#include <iostream>
#include "ejercicios.h"
#include <math.h>

using namespace std;

/************* Ejercicio 1 *************/

// Decidir si un vector esta ordenado tanto ascendente como descendentemente
//Rta: El error estaba en que nunca se inicializaba la variable esMEnor con lo 
// cual nunca ingresaba al while
bool estaOrdenadoAsc(vector<int> v){
  int i=0;
  int longitud = v.size();
  bool esMenor = true;

  while((i <= longitud - 2) && esMenor){
    esMenor = v[i]<=v[i+1];
    i++;
  }
  return i==longitud-1;
}


// A este algoritmos le faltaba las llaves al ciclo while
// por lo que nunca se incrementaba i++ y nunca salia del ciclo
bool estaOrdenadoDesc(vector<int> v){
  int longitud = v.size();
  int i=0;
  bool esMayor = true;
  while(i<=longitud-2 && esMayor){
    esMayor = v[i]>=v[i+1];
    i++;
  }

  return i==longitud-1;
}

//una vez que los anteriores algoritmos se corrigieron este funiono bien
bool estaOrdenado(vector<int> v){
  int longitud = v.size();
  if (longitud==0 || longitud==1)
    return true;
  else
    return estaOrdenadoDesc(v) || estaOrdenadoAsc(v);
  }



/************* Ejercicio 2 *************/

// Decidir si un numero es primo.
// RTA: Hay un mal diseño en este algoritmo ya que la anidacion de if
// no permite leerlo bien, el error estaba en que 
// la expresion  noHayDivisor = (numero % i) != 0;
// era la contraria deberia usarse la igualdad.
bool esPrimo(int numero){
  if(numero > 2){
    int i=2;
    bool noHayDivisor = false;

    while(i < numero && !noHayDivisor){
      noHayDivisor = (numero % i) == 0;
      i++;
    }
    return i==numero;
  }
  else{
     if(numero==2)
        return true;
     else
        return false;
  }
}

/************* Ejercicio 3 *************/

// Decidir si un elemento dado pertenece al vector.
//RTA El problema de este algoritmo era que cuando el elemento buscado 
// estaba en la ultima posicion nunca lo encontraba.
// en ese caso la salida del ciclo era por haber llegado al final y justo en ese caso 
// el elemento era el buscado, se corrige en el ultimo return consultando si +
// se hallo el elemento
bool pertenece(int elemento, vector<int> v){
  
  int longitud = v.size();

  if(longitud==0)
    return false;
  else {
      int i=0;
      bool sigo = true;
      while(( i < longitud) && sigo){
        sigo = v[i] != elemento;
        i++;
      }
   return i < longitud || !sigo;
  }
}

/************* Ejercicio 4 *************/

// Encontrar el desvio estandar de un vector de floats.
//RTA: promedio() tenia a la variable suma como entera de manera que los operadores
// division daban cero cuando se trataba de flotantes en la ultima instruccion 
float promedio(vector<float> v){
  int longitud = v.size();
  float suma=0.0f;
  
  for(int i=0; i<=longitud-1; i++)
    suma+=v[i];

  return suma/(float)longitud;
}

// RTA:  El programador de esto se habia olvidado un ';' al finalizar la guarda
// del for con lo que el ciclo no hacia instruccion alguna!!!! maldito
float sumaDeCuadrados(vector<float> v){
  float sumadecuadrados=0;
  unsigned int i;
  for(i=0; i<=v.size()-1; i++)
    sumadecuadrados+=pow((v[i]-promedio(v)),2);
  return sumadecuadrados;
}

float desvioEstandar(vector<float> v){
  return sqrt(sumaDeCuadrados(v)/v.size());
}


/************* Ejercicio 5 *************/

// Calcular el k-esimo numero de fibonacci
// RTA:  en los if anidados habia asignaciones en lugar de igualdades
// y el retorno era j en lugar de la diferencia entre i, j
long fibonacci(int k){
  if(k==0)
        return 0;
  else 
        if(k==1)
            return 1;
        else{
                long i=0;
                long j=1;
                long m = 0;
                int nesimo;
                for(nesimo==1; nesimo<=k; nesimo++){
                    m = j;
                    j = i+j;
                    i = m;
            }
    return j-i;
  }
}


/************* Ejercicio 6 *************/

// Encontrar el maximo comun divisor de dos numeros
// tube que rehacer la funcion maximoCumunDivisor 
// y auqe el algoritmo estaba mal
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

int maximoComunDivisor(int x, int y){
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

/************* Ejercicio 7 *************/

// Para un vector de enteros, calcular la sumatoria del doble de los elementos positivos y pares.
//RTA dentro del ciclo for habia un i++ demas.
int sumaDoble(vector<int> v){
  int suma=0;

  for(unsigned int i=0; i<v.size(); i++){
  
    if(((v[i] % 2) == 0 )&& (v[i]>=0)) 
      suma =+ v[i]*2;
  }
  return suma;
}

/************* Ejercicio 8 *************/

// Contar la cantidad de palabras que hay en un archivo de texto.
//RTA: cont se inicializaba en 0 es decir que siempre le faltaba una palabara.
int cantPalabras(string filename) {
  ifstream miArchivo;
  string palabra;
  int cont = 1;

  miArchivo.open(filename.c_str(), ifstream::in);
  if(miArchivo.is_open()) {
    while(miArchivo.eof()) {
      miArchivo >> palabra;
      cont++;
    }
  }
  miArchivo.close();
  return cont;
}

/************* Ejercicio 9 *************/

/* El archivo SensadoRemoto.txt contiene una lista de valores reales provenientes de una estacion
* de medicion de una variable fisica dada, cuyos valores son positivos menores a 1.
* Escribir un programa que calcule el promedio de los valores tomados durante un periodo de tiempo.
* Verificar el resultado obtenido.
*/
/*
  RTA
  Habia un error en el archivo de entrada que no tenia un punto en el nuemro posiscion 40
*/
float valorMedio() {
  ifstream miArchivo;
  float val = 0.0f;
  float acum = 0.0f;
  int cont = 0;

  miArchivo.open("./datos/SensadoRemoto.txt",ifstream::in);
  if(miArchivo.is_open()) {
    while(!miArchivo.eof()) {
      miArchivo >> val;
      acum += val;
      cont++;
    }
  }
  miArchivo.close();
  
  return acum/cont;
}

// Devolver en res la fraccion (entre 0 y 1) de numeros mayores a 0.
// RTA el parametro float se pasaba por valor y en el se devolvia el resultado!!!
// que genios jajaj
void fraccion(vector<int> v, float& res){
  int count = 0;
  int tam = v.size();

  if (tam == 0)
    res = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] > 0){
      count++;
    }
  }
  if (tam != 0) 
      res = (float)count / (float)tam;
 }