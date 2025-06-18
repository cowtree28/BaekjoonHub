#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int prize;
	scanf("%d", &prize);
	printf("%d %d", (int)(prize * 0.78), (int)(prize - ((prize * 0.2) * 0.22)));
	return 0;
}