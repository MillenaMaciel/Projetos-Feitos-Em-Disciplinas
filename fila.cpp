#include <bits/stdc++.h>
using namespace std;


void fila(vector<int> &vet, vector<int> &vet2, int n, int m){
    for(int i =0; i <m; i++){
        for(int j =0;j<n;j++){
            if(vet[j] == vet2[i]){
                vet[j] = -1;
                break;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        if(vet[i]!= -1){
            cout << vet[i] << " ";
        }
    }
    cout << endl;
}


int main(){
   int n, m;
   cin >> n;
   vector<int> vet(n);
  
   for(int i=0;i<n;i++){
       cin >> vet[i];
   }
   cin >> m;
    vector<int> vet2(m);
   for(int j=0; j<m;j++){
       cin >> vet2[j];
   }
   
   fila(vet,vet2,n, m);
   
   
}


/*def busca_binaria(vetor, n, item):
  inicio = 0 #inicio do vetor
  fim   = n - 1 # fim do vetor
  contador = 0 # numero de iteracoes para encontrar um elemento no vetor
  while inicio <= fim:
    meio = (inicio + fim)//2 #divisão inteira
    contador = contador + 1
    if vetor[meio] == item:
      break             
    else:
      if vetor[meio] > item:
        fim = meio - 1
      else:
        inicio = meio + 1
  return contador*/

