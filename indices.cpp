#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


vector<pair< int, int > > vet;

void indice(void) {

	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
    	int valor;
    	cin >> valor;
    	vet.push_back({valor, i});
	}	
		sort(vet.begin(), vet.end());
	for (int i = 0; i < n; ++i) {
    	cout << vet[i].second;
    	
    	if(i < n-1){
    	    cout << ' ';
    	}
	}
		cout << endl;
  
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
   		indice();
        
    return 0;
}