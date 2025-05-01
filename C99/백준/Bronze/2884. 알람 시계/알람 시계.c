#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	m += h * 60 + (24*60);
	m -= 45;
	h = (m / 60) % 24;
	m %= 60;
	printf("%d %d", h, m);
}