#include <iostream>
using namespace std;

int vet[1000];

 int sum(int n) {
	if (n == 1) {
 		return vet[1];
	 }
 	else {
 		return vet[n] + sum(n-1);
	}
 }
 
  int mult(int n) {
	if (n == 1) {
 		return vet[1];
	 }
 	else {
 		return vet[n] * mult(n-1);
	}
 }

void imprime(int n) {
    if (n == 1) {
          cout << "[ " << vet[n]; //<<: concatenar
    } else {
    	imprime (n - 1);
	
		 cout << " " << vet[n];
    }
    
}


/*int menor( int vet[], int n )
{
    if( n == 1 )
        return vet[1];

    int m = menor( vet + 1, n - 1 );

    return ( vet[0] < m ) ? vet[0] : m;
}*/




int main(void){
	int n = 1;
	

	for( ; cin >> vet[n]; ){
	    n++;	
	}
	
	n--;

 	cout << "vet : " ;
 		imprime(n);
 		cout << " ] " << endl; //endl: quebra de linha
 	
 		cout << "sum : " << sum(n) << " " << endl;
 	
 		cout << "mult: " << mult(n) << " " << endl;
 		
 		//cout << "min: " << menor(vet ,n) << " "<< endl;//
 	
 	return 0;
 	}
	




 /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
/*Entrada
um vetor de inteiros. O vetor tem no mínimo 1 elemento.
Saída
vet: o vetor
rvet: o vetor impresso ao contrário
sum: a soma dos elementos
mult: a multiplicação dos elementos
min: o menor elemento
inv: inverte o vetor, depois imprime ele invertido */