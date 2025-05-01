#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int y;
	scanf("%d", &y);
	printf("%d", !(y % 4) && (y % 100) || !(y % 400));
	return 0;
}