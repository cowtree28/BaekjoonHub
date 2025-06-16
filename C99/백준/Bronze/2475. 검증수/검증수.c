#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int number[5], answer = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &number[i]);
		answer += pow(number[i],2);
	}
	answer %= 10;
	printf("%d", answer);
	return 0;
}