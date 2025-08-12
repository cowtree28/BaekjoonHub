#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 0,temp;
	for (int i = 0; i < 6; i++) {
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d", sum * 5);
}