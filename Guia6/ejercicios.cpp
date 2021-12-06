#include "ejercicios.h"

/**************************************************************************************************/
/*          ejercicio 1                                                                 */
/**************************************************************************************************/
bool todasLasFilasTienenAncho( vector<vector<int> > matriz, int ancho){
     bool guarda = true;

     for (int i = 0; i < matriz.size(); i++)   
        guarda = guarda && matriz[i].size() == ancho;
    
    return guarda;
}

bool esMatrizDeAltoYAncho(vector<vector<int> > res, int alto, int ancho){

    return res.size() == alto && todasLasFilasTienenAncho(res, ancho);
}

bool cadaCoordenadaEsElProducto(vector<vector<int> > res,vector<int> fila, vector<int>columna){

    bool guarda = true;

    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++)
            guarda = guarda && ( res[i][j] == fila[i] * columna[j] );
    }

    return guarda;
}


vector<vector<int> > productoVectorial(vector<int> u, vector<int> v){
	vector<vector<int> > res(u.size(), vector<int>(v.size()));

    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); j++)
            res[i][j] = u[i] * v[j];
    }

	return res;
}
/**************************************************************************************************/




/**************************************************************************************************/
/*					Ejercicio 2 										*/
/**************************************************************************************************/
bool esCuadrada(vector<vector<int> > &m) {
	
	return m.size() == m[0].size();
}

void trasponer(vector<vector<int> > &m) {
	
	vector<vector<int> > traspuesta = m;

	for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++)
            m[j][i] = traspuesta[i][j];
    }

	return;
}

/**************************************************************************************************/
/*					Ejercicio 3 										*/
/**************************************************************************************************/


vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	//COMPLETAR
	vector<vector<int> > res(m1.size(), vector<int>(m2[0].size()));

    for(int i = 0; i < m1.size(); i++)
        for(int j = 0; j < m2[i].size(); j++)
            for(int k = 0; k < m2.size(); k++)
                res[i][j] += m1[i][k] * m2[k][j];

	return res;
}

/**************************************************************************************************/
/*					Ejercicio 4 										*/
/**************************************************************************************************/
void sumaVecinos(vector<vector<int> > m, int a, int b,int& acumVecinos, int& cantVecinos){

    int mfilas = m.size(),
        mColumnas = m[0].size();

    for(int i = a-1; i <= a+1; i++){
        for(int j = b-1; j <= b+1; j++){
            if(i >= 0 && i < mfilas && j >= 0 && j < mColumnas){
                acumVecinos += m[i][j];
                cantVecinos++;
            }
        }
     }
}


vector<vector<int> > promediar(vector<vector<int> > m){
	//COMPLETAR
	vector<vector<int> > res(m.size(), vector<int>(m[0].size()));
    int acumVecinos = 0,
        cantVecinos = 0;
    

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){

            sumaVecinos(m,i,j, acumVecinos, cantVecinos);
            res[i][j] = acumVecinos / cantVecinos;
            acumVecinos = 0;
            cantVecinos = 0;
        }
     }
	return res;
}
/**************************************************************************************************/
/*					Ejercicio 5 										*/
/**************************************************************************************************/
bool esPico(vector<vector<int> > m, int a, int b){

    int mfilas = m.size(),
        mColumnas = m[0].size(),
        elem = m[a][b];
    bool guarda = true;

    for(int i = a-1; i <= a+1; i++){
        for(int j = b-1; j <= b+1; j++){
            if(i >= 0 && i < mfilas && j >= 0 && j < mColumnas){
                guarda = guarda && (elem >= m[i][j]);
            }
        }
     }
    return guarda;
}


int contarPicos(vector<vector<int> > m){
	//COMPLETAR
	vector<vector<int> > res(m.size(), vector<int>(m[0].size()));
    int acumPicos = 0;

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            if ( esPico(m,i,j) )
                acumPicos ++;
                
        }
     }
     cout << "acumPico " << acumPicos << endl;
	return acumPicos;
}

/**************************************************************************************************/
/*					Ejercicio 6 										*/
/**************************************************************************************************/
bool esTriangularInf(vector<vector<int> > m){
    bool guarda = true;

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            if(i > j)
                guarda = guarda && ( m[i][j] == 0 );
        }
     }

    return guarda;
}

bool esTriangularSup(vector<vector<int> > m){

    bool guarda = true;

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            if(i < j)
                guarda = guarda && ( m[i][j] == 0 );
        }
     }

    return guarda;
}

bool esTriangular(vector<vector<int> > m){
	//COMPLETAR
	return esCuadrada(m) && (esTriangularInf(m) || esTriangularSup(m));
}


/**************************************************************************************************/
/*					Ejercicio 7 										*/
/**************************************************************************************************/

int abs(int t){
    return (t >= 0)? t : -t;
}

bool seAmenazan(int i1, int j1, int i2, int j2){
    return (  i1 != i2 or j1 != j2) && (i1 == i2 or j1 == j2 or abs(i1 - i2) == abs(j1 - j2));
}


bool amenazaAlguna(vector<vector<int> > m, int i1, int j1){
   bool guarda = false;

    for(int i2 = 0; i2 < m.size(); i2++){
        for(int j2 = 0; j2 < m[i2].size(); j2++){
            if( m[i2][j2] == 1)
                guarda = guarda || seAmenazan(i1, j1, i2, j2);
        }
     }

    return guarda;    
}

bool existeAmenaza(vector<vector<int> > m){
   bool guarda = false;

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            if( m[i][j] == 1)
                guarda = guarda || amenazaAlguna(m, i,j);
        }
     }

    return guarda;    
}


bool hayAmenaza(vector<vector<int> > m){
	//COMPLETAR
    return existeAmenaza(m);
}


/**************************************************************************************************/
/*					Ejercicio 8 										*/
/**************************************************************************************************/
int sumoDiagonal(vector<vector<int> > m) {

    int suma = 0;
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++)
            if( i == j)
                suma += m[i][j];        
     }
    return suma;
}

int sumoDiagonalInversa(vector<vector<int> > m) {

    int suma = 0;
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++)
            if( i == m[j].size() - j -1)
                suma += m[i][j];        
     }
    return suma;
}
int diferenciaDiagonales(vector<vector<int> > m) {
    int diagonal_1 = 0,
        diagonal_2 = 0;

    diagonal_1 = sumoDiagonal(m);
    diagonal_2 = sumoDiagonalInversa(m);
    
    return abs (diagonal_1 - diagonal_2);
}
