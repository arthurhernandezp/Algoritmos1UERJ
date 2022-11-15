/*
Escreva uma função que receba como entrada um número n, um vetor m[], e um número k, e retorne a soma dos 
números entre 1 e n que sejam múltiplos de alguns dos números m[1],.....,m[k]. [ O(n) ]
*/


#include <stdio.h>
#include <stdlib.h>

long long int CalculaSoma(int n, int m[], int k) {
	/* m = [a1, a2, ..., ak] */
	long long int somaTotal = 0;
	for(long long int i = 1; i <= n ;i++){
		for(int j = 0;j < k;j++){
			if(i % m[j] == 0){
				somaTotal = somaTotal + i;
				break;
			}
		}
	}
	return somaTotal;
	/* insert your code here */
}

int main() {
	int n; int k; 
	int * m;
	while (scanf("%d %d", &n, &k)>0) {
		m = (int *) malloc(sizeof(int)*n);
		for (int i=0; i<k; i++) {
			scanf("%d", &m[i]);
		}
		printf("%lld\n", CalculaSoma(n, m, k));
		free(m);
	}
}
