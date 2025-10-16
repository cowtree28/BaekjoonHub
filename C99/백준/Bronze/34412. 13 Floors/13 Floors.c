#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	if (x >= 13)
		x++;
	printf("%d", x);
}