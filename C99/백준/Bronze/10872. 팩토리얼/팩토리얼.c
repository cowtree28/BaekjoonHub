#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, answer = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		answer *= i;
	}
	printf("%d", answer);
}