#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", ((int)pow(a, (b - 1) % 4 + 1) - 1) % 10 + 1);
	}
}