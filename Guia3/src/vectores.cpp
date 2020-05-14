#include "vectores.h"
#include <fstream>

bool es_primo(int x){
    int resto = 1;
    int i = 2;

    while ((resto != 0) && (i < x)){
        resto = x % i;
        i++;
    }

    return (resto != 0);
}

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}


//Ejercicio
bool divide(vector<int> v, int a){
	// Dados un vector v y un int a, decide si a divide a todos los numeros de v.
	bool guarda = true;
	int i = 0;

	if(a <= 0)
		return false;

	do{
		guarda =  (v[i] % a) == 0;
		i++;
	}while( guarda && i < v.size());

	return guarda;
}

//Ejercicio
int mayor(vector<int> v){
	// Dado un vector v, devuelve el valor maximo encontrado.
	int mayor = 0;

	for(int i = 0; i < v.size(); i++)
		if(v[i] >= mayor )
			mayor = v[i];

	return mayor;
}

//Ejercicio
vector<int> reverso(vector<int> v){
	// Dado un vector v, devuelve el reverso
	vector<int> otro_v;
	int elem = 0,
		size = v.size();

	if(size <= 0) //se devuelve el vector vacio
		return v;

	while(size > 0){

		elem = v[size - 1];
		otro_v.push_back(elem);
		size--;
	};
		
	return otro_v;
}
// funcion aux que me devuelve un subvector de k posicions a partir del inicio
vector<int> sub_vector(vector<int> v, int k){
	vector<int> otro_v;
	int elem = 0,
		size = v.size();

	if(size <= 0) //se devuelve el vector vacio
		return v;
	
	for(int i = 0; i < k  ; i++)
		if(i <= v.size() - 1)
			otro_v.push_back( v[i] );

	return otro_v;
}

//Ejercicio
vector<int> rotar(vector<int> v, int k){
	// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
	// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
	vector<int> otro_v,
				sub_v;
	int elem = 0,
		size = v.size();

	if(size <= 0) //se devuelve el vector vacio
		return v;

	sub_v = sub_vector(v, k);

	for(int i = k ; i < v.size(); i++){
		otro_v.push_back (v[i]);
	}

	for(int i = 0 ; i < sub_v.size(); i++){
		otro_v.push_back (sub_v[i]);
	}
	
	return otro_v;
}

//Ejercicio
vector<int> factoresPrimos(int n){
	//que dado un entero devuelve un vector con los factores primos del mismo
	vector<int>v;
	int factor_primo = 2;

	while(factor_primo <= n){

		if ( es_primo(factor_primo) ){
			if ( (n % factor_primo) == 0){
				v.push_back(factor_primo);
			}
		}
		
		factor_primo++;
	}
	return v;
}

//Ejercicio
void mostrarVector(vector<int> v){
	//que dado un vector de enteros muestra por la salida estándar, el vector
	// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
	cout << "[";

	for(int i=0; i< v.size(); i++){
		cout <<  v[i] ;
		if (i < v.size() - 1 )
			cout << "," ;
	}
	cout << "]"<< endl;
}


vector<int> leerVector(string nombreArchivo){

	ifstream fin; // Declara el archivo
	vector<int> v;
	int a = 0;

	fin.open (nombreArchivo,ios::in); // abre modo lectura
	if (fin.fail()) { // true si hubo error al abrir
		cout << "Error al abrir el archivo" << endl;
		return v;
	}

	for(int i=0; !fin.eof(); i=i+1){
		fin >> a;
		v.push_back(a);
	}

	fin.close();
	return v;
}

void guardarVector(vector<int> v, string nombreArchivo){

	ofstream fout; // Declara el archivo
	
	fout.open (nombreArchivo); 

	if ( !fout.fail() ) {

		for(int i=0; i < v.size(); i=i+1){

			fout << v[i] << ' ';
		}
		fout << endl;
	}

	fout.close();
}

int elementoMedio(vector<int>v){

	int elem = 0,
		size = v.size();

	if(size <= 0) //se devuelve el vector vacio
		return 0;
	
	 
	return 3;
}

int obtener_pos(vector<int> v, int elem){

	int pos = -1;

	for(int i = 0; i < v.size(); i++){
		if(v[i] == elem )
			pos = i;
	}

	return pos;
}


bool esta_en_vector(vector<int> v, int elem){

	bool guarda = false;

	for(int i = 0; i < v.size(); i++){
		if(v[i] == elem )
			guarda = true;
	}

	return guarda;
}



void cantApariciones(string nombreArchivo){
	
	vector<int> vector_numeros, vector_apariciones;

	ifstream fin; // Declara el archivo
	ofstream fout;
	int a = 0;
	int pos = 0;

	fin.open (nombreArchivo,ios::in); // abre modo lectura
	if (!fin.fail()) { // true si hubo error al abrir

		while ( !fin.eof()){
			fin >> a;
			
			if(esta_en_vector(vector_numeros, a)){
				pos = obtener_pos(vector_numeros, a);
				vector_apariciones[pos]++;
			}
			else{
				vector_numeros.push_back(a);
				vector_apariciones.push_back(1);
			}			
		}
		fout.open("../archivos/out/cantidadApariciones.out");
		if( !fout.fail()){
			for(int i=0 ; i < vector_apariciones.size() ; i++){
				fout << "linea " << i << ":	" << vector_numeros[i] <<" "<< vector_apariciones[i] << endl;
			}

		}
		fout.close();
	}

	fin.close();
}

int cantidadAparicionesDePalabra(string nombreArchivo, string palabra){
	string word;
	ifstream fin;
	int cant_palabras = 0;
	
	fin.open(nombreArchivo, ios::in);
	if(fin.fail()){
		cout << "error al abrir el archivo" << endl;
		return -1;
	}

	while(!fin.eof()){

		fin >> word;
		if (word == palabra)
			cant_palabras++;
	}

	fin.close();
	return cant_palabras;

}


void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){

	ifstream f1, f2;
	ofstream f3;
	int num1 , num2;
	float result = 0.0f;

	f1.open(nombreArchivoIn1, ios::in);
	f2.open(nombreArchivoIn2, ios::in);

	if(f1.fail() || f2.fail()){
		cout << "error al abrir el archivo" << endl;
		return;
	}
	f3.open(nombreArchivoOut);
	while(!f1.eof() || !f2.eof()){
		f1 >> num1;
		f2 >> num2;

		result = (float) num1 / num2 ; 
		f3 << result << " " ;
	}
	f1.close();
	f2.close();
	f3.close();
}

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut){

	ifstream f1, f2;
	ofstream f3;
	int num1 , num2;
	

	f1.open(nombreArchivoIn1, ios::in);
	f2.open(nombreArchivoIn2, ios::in);

	if(f1.fail() || f2.fail()){
		cout << "error al abrir el archivo" << endl;
		return;
	}

	f3.open(nombreArchivoOut);

	while(!f1.eof() || !f2.eof()){
		f1 >> num1;
		f2 >> num2;
		
		if(num1 <= num2){
			f3 << num1 << " " ;
			f3 << num2 << " " ;
		}
		else{
			f3 << num2 << " " ;
			f3 << num1 << " " ;
		}
	}
	f1.close();
	f2.close();
	f3.close();
}


vector<int> interseccion(){

	vector<int> v1, v2, vector_interseccion;
	string nombre_arch1,nombre_arch2;
	int loop = 0;


	cout << "ingrese los nombres de dos archivos :" << endl;
	cin >> nombre_arch1;
	cin >> nombre_arch2;
	v1 = leerVector(nombre_arch1);
	v2 = leerVector(nombre_arch2);
	//calculo el tamaño del menor de los vectores
	

	for(int i = 0; i < v2.size(); i++){
		//busco en v2 los elementos de v1
		if(esta_en_vector( v1, v2[i]))
			vector_interseccion.push_back(v2[i]);

	}
	mostrarVector(vector_interseccion);
	return vector_interseccion;
}