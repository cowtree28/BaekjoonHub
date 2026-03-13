#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int price;
	scanf("%d", &price);
	printf("%.0f", price / 11.0 * 10.0);
}