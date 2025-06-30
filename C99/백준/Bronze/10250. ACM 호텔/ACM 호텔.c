#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, w, n,N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &h, &w, &n);
		printf("%d", (n - 1) % h + 1);
		printf("%02d\n", (n - 1) / h + 1);
	}
	
}