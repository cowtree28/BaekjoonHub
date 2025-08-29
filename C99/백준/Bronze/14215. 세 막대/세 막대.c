#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	int other_sum, max;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		max = a;
		other_sum = b + c;
	}
	else if (b > a && b > c) {
		max = b;
		other_sum = a + c;
	}
	else {
		max = c;
		other_sum = a + b;
	}
	if (max < other_sum)
		printf("%d", other_sum + max);
	else {
		printf("%d", other_sum + (other_sum - 1));
	}
}