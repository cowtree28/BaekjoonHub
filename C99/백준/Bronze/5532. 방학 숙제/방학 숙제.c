#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int l, a, b, c, d;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);

	printf("%d", l - (((a + c - 1) / c) > ((b + d - 1) / d) ? ((a + c - 1) / c) : ((b + d - 1) / d)));
}