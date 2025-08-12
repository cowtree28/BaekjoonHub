#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			printf("%d\n", i);
		}
	}
}