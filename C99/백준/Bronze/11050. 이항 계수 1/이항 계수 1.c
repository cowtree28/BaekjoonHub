#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, K,answer = 1;
	scanf("%d %d", &N, &K);
	for (int i = 0, n = N; i < K; i++, n--)
		answer *= n;
	for (int i = K; i > 0; i--)
		answer /= i;
	printf("%d", answer);
}