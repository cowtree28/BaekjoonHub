#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c,temp;
	int number[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	temp = a * b * c;
	while(temp > 0){
		number[temp % 10]++;
		temp /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", number[i]);
	}
}