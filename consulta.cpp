#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


vector <string> vet;



void consulta() {
    int resp = 0;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
    	string valor;
    	cin >> valor;
    	vet.push_back(valor);
    	
    	
	}	
		int m;
		cin >> m;
		for(int i=0; i <m;i++){
		    string valor;
    	    cin >> valor;
    	   cout << count(vet.begin(), vet.end(), valor);
    	   if(i <m-1){
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
   		consulta();
        
    return 0;
}