#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, s;
	while (scanf("%d %d", &n, &s) != EOF)
		printf("%d\n", s / (n + 1));
}