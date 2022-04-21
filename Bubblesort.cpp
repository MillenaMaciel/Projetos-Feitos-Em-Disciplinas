#include <iostream>
#include <sstream>
#include <vector>
using namespace std;



void bubbleSort(vector<int> vet, int n) {
  int cont = 0;
  bool trocou = true;
  while (trocou) {
    trocou = false;
    cont++;
    for (int j = 1; j < n-1; j++) {
      if (vet[j] < vet[j - 1]) {
        swap(vet[j], vet[j - 1]);
        trocou = true;
      }
    }
  }
  cout << cont << endl;
}	


int main(){
    int tam;
    cin >> tam;

    vector<int> vet;
	for(int i = 0; i<tam;i++){
        int aux;
        cin >> aux;
        vet.push_back(aux);
    }
     
    
    bubbleSort(vet, tam);
        
    return 0;
}
