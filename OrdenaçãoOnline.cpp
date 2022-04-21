#include <bits/stdc++.h>
using namespace std;


void merge( vector <int> & A, int start, int mid, int end){

    vector <int> W;// vet aux para juntar
    W.resize( end - start + 1); //tamanho do vetor

    int i = start;
    int j = mid+1;
    int k = 0;
    
    while( i <= mid && j <= end ){
        if( A[i] < A[j] ){
            W[k] = A[i], k++, i++;
        }else{
            W[k] = A[j], k++, j++;
        }

    }

    while( i <= mid ) W[k] = A[i], k++, i++;
    while( j <= end ) W[k] = A[j], k++, j++;

    for(int i = start; i <= end; i++){
        A[i] = W[i-start];
    }

}

void mergesort(vector <int> & A, int start, int end){
    // start == end tamanho 1
    // start > end  tamanho 0

    if( end > start){
        int mid = (start + end) / 2;
       
        mergesort(A, start, mid);
        
        mergesort(A, mid+1, end);
        
        merge(A, start, mid, end);    
    }
}


int main(){
   int n;
   cin >> n;
   vector<int> vet;
  
   for(int i=0;i<n;i++){
       int o,x;
       cin >> o >> x;
       if(o==1){
        vet.push_back(x);   
        mergesort(vet,0, vet.size()-1);
       }
       
       else{
           cout << vet[x] <<endl;
       }
       
   }
  
   
   
   

   
}


