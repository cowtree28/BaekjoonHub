#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int i = 1,max = 1;
	while (1) {
		if (max > x) {
			break;
		}
		max += i++;
	}
	x -= max - i;
	if (i % 2 == 0)
		printf("%d/%d", i - x, x);
	else
		printf("%d/%d", x, i - x);
}