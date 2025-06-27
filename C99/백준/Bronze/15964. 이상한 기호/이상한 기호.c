#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int weird(int a, int b) {
	return (a + b) * (a - b);
}


int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", weird(a, b));
}