#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


vector <int> vet;
vector <int> vet2;


void vacina() {
    int resp = 0;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
    	int valor;
    	cin >> valor;
    	vet.push_back(valor);
	}	
		for (int i = 0; i < n; ++i) {
    	int valor;
    	cin >> valor;
    	vet2.push_back(valor);
	}	

    sort(vet.begin(), vet.end());
    sort(vet2.begin(), vet2.end());
	
	for(int i=0; i <n;i++){
	    if(vet[i]<=vet2[i]){
	        cout << "No" << endl;
	        return;
	    }
	    
}

	cout << "Yes" << endl;
}	


int main(){
   // int tam;
    //cin >> tam;
	
	
   /* vector<int> vet;
	for(int i = 0; i<tam;i++){
        int aux;
        cin >> aux;
        vet.push_back(aux);
    }*/
     
    
   // bubbleSort(vet, tam);
   		vacina();
        
    return 0;
}