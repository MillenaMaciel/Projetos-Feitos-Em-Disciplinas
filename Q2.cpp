#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void imprime(vector<int> vet, int n) {       //Imprime o vetor
    cout << "[ ";
    for(int i = 0; i < n; i++){
    	cout << vet[i] << " ";
    }
	cout << "]" << endl; 
}



void piramide(vector<int> vet, int n){
	if(n != 1) {
		vector<int> vcopy;
		for(int i = 0; i < n-1; i++){
		    vcopy.push_back(vet[i] + vet[i+1]);
		}
		piramide(vcopy, vcopy.size());
	}
	imprime(vet,n);
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
    
    piramide(vet, n);
        
    return 0;
}
