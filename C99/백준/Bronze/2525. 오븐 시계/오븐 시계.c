#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m, cook;
	scanf("%d %d %d", &h, &m, &cook);
	m += (h * 60) + cook;
	h = (m / 60) % 24;
	m %= 60;
	printf("%d %d", h, m);
	return 0;
}