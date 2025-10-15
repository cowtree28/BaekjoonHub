#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	long long int i = 0;
	while ((i * i) <= n) {
		i++;
	}
	i--;
	printf("%lld", i);
}