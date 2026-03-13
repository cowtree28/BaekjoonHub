#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int month = (2024 * 12) + 1 + (n * 7);
	if (month % 12 == 0)
		printf("%d %d", month / 12 - 1, 12);
	else
		printf("%d %d", month / 12, month % 12);
}