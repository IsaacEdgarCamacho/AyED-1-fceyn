#include<iostream>
#include<vector>

using namespace std;

void show_matrix(vector < vector<int> >& matriz){

    for(int i = 0; i < matriz.size(); i++){
        for(int j = 0; j < matriz[i].size(); j++)
            cout << matriz[i][j];
        cout << endl;
    }
}
void tam_matrix (vector < vector<int> >& matriz){

    cout << "Dimension :" << matriz.size() << " filas " << matriz[0].size() << " columnas "<< endl;
}

/**************************************************************************************************/
/*          ejercicio 1                                                                 */
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


int main(){
    vector < vector<int> > matriz;

    vector<int> u (3, 5), v(3,6);

    matriz = productoVectorial(u,v);

    show_matrix(matriz);
    tam_matrix(matriz);
    return 0;
}