#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void swap (vector<int>&s, int a, int b){
    int c = s[a];
    s[a] = s[b];
    s[b] = c; 
}

void insert(vector<int> &s, int i) {
	for(int j=i; j>0 && s[j] > s[j-1]; j--) {
		swap(s, j, j-1);
	}
}
void insertionSort(vector<int> &arr) {
	for(int i=0; i<arr.size(); i++) {
		insert(arr,i);
	}
}

/////////////////////////////////////////////////
//void selectionSort(vector<int> &arr) {
/////////////////////////////////////////////////

int findMinPosition(vector<int> &s, int d, int h) {
	int min = d;
		
		for(int i=d+1; i<h; i++) {
			if (s[i] < s[min]) {
			min = i;
		}
	}
	return min;
}

int findMaxPosition(vector<int> &s, int d, int h) {
	int max = d;
		
		for(int i=d+1; i<h; i++) {
			if (s[i] > s[max]) {
			max = i;
		}
	}
	return max;
}

void selectionSort(vector<int> &arr) {
	for(int i=0; i<arr.size(); i++) {
		int minPos = findMaxPosition(arr, i, arr.size());
		swap(arr, i, minPos);
	}
}
/////////////////////////////////////////////////
/////////////////////////////////////////////////


void ordenar(vector<int> &items){
	insertionSort(items);
}


int bestFit(int W, vector<int> &items){
	multiset<int> restos;
	for(int i=0; i<(int)items.size(); ++i){
		restos.insert(W);
	}
	int res = 0;
	for(int i=0; i<(int)items.size(); ++i){
		multiset<int>::iterator it = restos.lower_bound(items[i]);
		int restoAct = *it;
		if(restoAct==W){
			res++;
		}
		restoAct -= items[i];
		restos.erase(it);
		restos.insert(restoAct);
	}
	return res;
}

int main(){
	int N, W, aux;

	//Se levantan los items y la capacidad del contenedor
	cout << "Se levantan los items y la capacidad del contenedor";
	ifstream bpp("bin-package/src/BPP.in");
	
	bpp >> N >> W;
	vector<int> items;
	
	//cout <<endl<< W << " "<< N << " no hubo un error "<< endl;

	for(int i=0; i<N; ++i){
		bpp >> aux;

	//	cout << aux << " " ;
		items.push_back(aux);
	}

	//cout << endl;
	bpp.close();
	//Se corre best-fit
	int cant1 = bestFit(W, items);
	cout << "Con la idea bestFit, se consigue una asignacion con " << cant1 << " contenedores" << endl;

	//Se ordenan los items
	
	double t0 = clock();
	ordenar(items);
	double t1 = clock();
	double tiempo = (double (t1 -t0)/ CLOCKS_PER_SEC);

	for(int i=0; i<items.size(); ++i){
		cout << items[i] << " " ;
	}

	cout << endl <<" el tiempo que tardo es :" << tiempo << "seg \n  \n \n";
	//Se corre best-fit-decreasing
	int cant2 = bestFit(W, items);
	cout << "Con la idea bestFitDecreasing, se consigue una asignacion con " << cant2 << " contenedores" << endl;

	return 0;
}
