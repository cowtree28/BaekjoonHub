#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, a, b, x;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &a, &b, &x);
		printf("%d\n", a * x - a + b);
	}
}