#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int temp, sum = 0, min = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &temp);
		if (temp % 2 == 1) {
			sum += temp;
			if (min > temp || min == 0)
				min = temp;
		}
	}
	if (sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, min);
}