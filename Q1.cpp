#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

 int sum(vector<int> vet, int n) {   
    if (n == 1) {
         return vet[n-1];
     }
     else {
         return vet[n-1] + sum(vet, n-1);
    }
 }
 
 int mult(vector<int> vet, int n) {     
    if (n == 1) {
         return vet[n-1];
     }
     else {
         return vet[n-1] * mult(vet, n-1);
    }
 }

void imprime(vector<int> vet, int n) {       
    if (n == 1) {
        cout << "[ " << vet[n-1]; 
    } else {
        imprime (vet, n-1);
        cout << " " << vet[n-1];
    }
}

int minimo(vector<int> vet, int n){
    if(n==1){
        return vet[n-1];
    }
    else {
        int aux = minimo(vet, n-1);
        if(vet[n-1]< aux){
            return vet[n-1];
        }else return aux;
    }
}

void rvet(vector<int> vet, int n) {       
    if (n == 1) {
        cout <<" "<< vet[n-1]; 
    } else {
        cout << " " << vet[n-1];
        rvet (vet, n-1);
    }
}

void inverteVetor(vector<int> &vet, int i, int n) {
    int t;
    
    if (i < n){
        t = vet[i];
        vet[i] = vet[n-1];
        vet[n-1] = t;
        inverteVetor(vet, i+1, n-1);
    }
}

int main(void){

    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> vet;
    int value;
    while(ss >> value)
        vet.push_back(value);
    
    int n = vet.size();
     cout << "vet : " ;
         imprime(vet, n);
        cout << " ]" << endl; 
        
        cout << "rvet: [";
        rvet(vet, n);
        cout << " ]"<<endl;
        
         cout << "sum : "<< sum(vet, n) << endl;
     
         cout << "mult: "<< mult(vet, n) << endl;
         
         cout << "min : " << minimo(vet, n) << endl;

        cout << "inv : ";
        inverteVetor(vet,0,vet.size());
         imprime(vet , n);
        cout << " ]" << endl; 
        
     return 0;
     }
