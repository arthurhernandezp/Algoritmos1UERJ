/*
  Soma de 1 a n (O(1))
*/

#include <stdio.h>
#include <stdlib.h>

long long int CalculaSoma(int n) {
	/* insert your code here */
	long long int s = (1+n);
	s = s*n/2;
	return s;
}

int main() {
	int n;
	while (scanf("%d", &n)>0) {
		printf("%lld\n", CalculaSoma(n));
	}
}
