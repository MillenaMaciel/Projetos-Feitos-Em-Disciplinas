#include <bits/stdc++.h>
using namespace std;
 
int cont = 0; 

/* Function to sort an array using insertion sort*/


int selectionSort(vector<int> &vet, int n)
{
    for(int i = 0; i < n; i++){
        int imenor = i;
        for(int j = i+1; j < n; j++){
            if(vet[j] < vet[imenor]) imenor = j;
        }
        if(i != imenor){
            int aux = vet[i];
            vet[i] = vet[imenor];
            vet[imenor] = aux;
            cont++;
        }
    }
    return cont;
}
 
// A utility function to print an array of size n
/*void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}*/
 
int main() {
 int n;
 cin >> n;
 
 vector<int> vet(n);
 for(int i=0; i <n;i++){
     cin >> vet[i];
 }
 
 cout << selectionSort(vet, n);
 cout << endl;
}