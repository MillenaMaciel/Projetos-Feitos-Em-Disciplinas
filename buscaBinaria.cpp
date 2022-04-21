#include <bits/stdc++.h>
using namespace std;


int binaria(vector<int> &vet, int n, int x){
    int inicio =0;
    int fim   = n - 1;
    int cont = 0;
    while (inicio <= fim){
    int meio = (inicio + fim)/2; //2 #divisão inteira
    cont = cont + 1;
    if (vet[meio] == x){
      break;
    }
    else{
      if (vet[meio] > x){
        fim = meio - 1;
      }
      else{
        inicio = meio + 1;
      }
    }
    }
  return cont;
  
    
}


int main(){
   int n, m;
   cin >> n >> m;
   vector<int> vet(n);
  
   for(int i=0;i<n;i++){
       cin >> vet[i];
   }
  
    int x;
   for(int j=0; j<m;j++){
       cin >> x;
       cout << binaria(vet, n, x); 
       if(j < m-1){
           cout << " ";
       }
   }
   cout << endl;
   
   

   
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

