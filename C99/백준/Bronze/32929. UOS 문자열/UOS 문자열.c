#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	if (x % 3 == 0)
		printf("S");
	else if (x % 3 == 1)
		printf("U");
	else
		printf("O");
}