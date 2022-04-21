#include <bits/stdc++.h>
using namespace std;



void right_rotation(vector<int>& vet, int nrot){
    vector<int> aux(vet.size());
    for(int i=0; i < vet.size();i++){
        int j = i+nrot;
        j=j%vet.size(); //pegar a posição final do valor atual
        aux[j] = vet[i];
        
    }
    vet=aux;
    
}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, nrot);
    show(vet);
}

