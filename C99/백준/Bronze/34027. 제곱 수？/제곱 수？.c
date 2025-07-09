#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d", &t);
	long long int n;
	for (int i = 0; i < t; i++) {
		scanf("%lld", &n);
		int is_square = 0;
		for (long long int i = 1; i <= sqrt(n) + 1; i++) {
			if (pow(i, 2) == n) {
				is_square = 1;
			}
		}
		printf("%d\n", is_square);
	}
}