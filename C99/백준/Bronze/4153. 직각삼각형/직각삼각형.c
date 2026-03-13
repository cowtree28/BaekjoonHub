#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (!a && !b && !c)
			break;
		else if (a > b && a > c) {
			if (pow(a, 2) == pow(b, 2) + pow(c, 2))
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if (b > a && b > c) {
			if (pow(b, 2) == pow(a, 2) + pow(c, 2))
				printf("right\n");
			else
				printf("wrong\n");
		}
		else {
			if (pow(c, 2) == pow(a, 2) + pow(b, 2))
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}