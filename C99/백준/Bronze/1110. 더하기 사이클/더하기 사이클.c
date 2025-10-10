#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int temp = n;
	int count = 0;
	do {
		temp = ((temp / 10) + temp % 10) % 10 + ((temp % 10) * 10);
		count++;
	} while (temp != n);
	printf("%d", count);
}