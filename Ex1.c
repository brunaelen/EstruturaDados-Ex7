#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i, n, aux;
	int vetor[10] = {10,20,35,24,1,26,45,78,6,3};
	
	for (i=0; i < 10; i++){
		for (n=0; n < 10; n++){
		if (vetor[n] > vetor[n + 1]) {
				aux = vetor[n];
				vetor[n] = vetor [n + 1];
				vetor [n + 1] = aux;
			}
		}
	}
	
	for (i = 0; i<=9; i++){
		printf ("%d \t", vetor[i]);
	}
	return 0;
}
