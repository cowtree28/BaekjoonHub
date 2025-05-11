#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,
		m,
		I,
		J,
		K,
		basket[100] = { 0 };
	scanf("%d %d", &n, &m);


	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &I, &J, &K);
		for (int j = I - 1; j < J; j++) {
			basket[j] = K;
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", basket[i]);
		
	return 0;
}