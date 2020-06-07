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
	
	return false;
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


vector<vector<int> > promediar(vector<vector<int> > m){
	//COMPLETAR
	vector<vector<int> > res;
	return res;
}

int contarPicos(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

bool esTriangular(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

bool hayAmenaza(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

int diferenciaDiagonales(vector<vector<int> > m) {
    //COMPLETAR
    return 0;
}