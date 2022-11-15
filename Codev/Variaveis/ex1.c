#include <stdio.h>
#include <stdlib.h>

long long int CalculaSoma(int n){
	/* insert your code here */
	long long int somaTotal = 0;
	for(long long int i = 0; i <= n; i++){
		somaTotal += i;
	}
	return somaTotal;
}

int main() {
	int n;
	while (scanf("%d", &n)>0) {
		printf("%lld\n", CalculaSoma(n));
	}
}
