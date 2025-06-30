#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b - c);
	int i,count = 0;
	for (i = b; i > 0; i /= 10) count++;
	printf("%d",(a * (int)pow(10,count)) + b - c);
}