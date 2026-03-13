#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	while (scanf("%d", &n), n != -1) {
		int sum = 0;
		for (int i = 1; i < n; i++) {
			if (n % i == 0)
				sum += i;
		}
		if (sum != n) {
			printf("%d is NOT perfect.\n", n);
			continue;
		}
		printf("%d = 1", n);
		for (int i = 2; i < n; i++) {
			if (n % i == 0)
				printf(" + %d", i);
		}
		printf("\n");
	}
}