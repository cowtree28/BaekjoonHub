#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long int n,f = 1;
	scanf("%lld", &n);
	for (long long int i = 2; i <= n; i++) {
		f *= i;
		while (1) {
			if (f % 10 == 0)
				f /= 10;
			else
				break;
		}
		f %= (long long int)1000000000000;
	}
	f %= 100000;
	printf("%05lld", f);
}