#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;


vector <int> vet;

int freq[400];

void frequente() {
    int resp, freqResp=0;
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
    	int valor;
    	cin >> valor;
    	vet.push_back(valor);
    	freq[valor] ++; 
    	
    	if(freq[valor] > freqResp){
    	    resp = valor;
    	    freqResp = freq[valor];
    	}
	}	
		
		cout  << resp << ' ' << freqResp << endl;
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
   		frequente();
        
    return 0;
}