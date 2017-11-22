#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>     
using namespace std;

int** creaMatriz(int n){
    int** matriz = 0;
    matriz = new int*[n];

      for (int i = 0; i < n; i++){
        matriz[i] = new int[n];
        for (int j = 0; j < n; j++){
            srand(time(0));
            matriz[i][j] = rand(); //rand es un número de 10 dígitos
            }
      }

      return matriz;
}

int** multiplicaClasica(int** A, int** B, int n){
    int** C = 0;
    C = new int*[n];

      for (int i = 0; i < n; i++){
        C[i] = new int[n];
        for (int j = 0; j < n; j++){
            C[i][j] = 0;
            }
      }
    
    for(int k=0; k<n;k++){
        for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            C[k][i]=C[k][i]+A[k][j]*B[j][i];
	        }
        }
    }
    
    return C;
}

int main() {
	int n=10;
	
    int** A= creaMatriz(n);
    int** B=creaMatriz(n);
    
    multiplicaClasica(A,B,n);
    
    return 0;
}
