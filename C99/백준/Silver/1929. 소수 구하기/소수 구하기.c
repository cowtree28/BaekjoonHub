#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	int* sieve = (int*)calloc(n,sizeof(int));
	if (n > 0)
		sieve[0] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 2 * i; j <= n; j += i)
			sieve[j - 1] = 1;
	}
	for (int i = m; i <= n; i++) {
		if (sieve[i - 1] == 0)
			printf("%d\n", i);
	}
	free(sieve);
	return 0;
}