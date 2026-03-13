#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	long long int domain1, domain2;
	scanf("%lld %lld", &domain1, &domain2);
	if (domain1 < domain2)
		printf("%lld", domain2 - domain1);
	else
		printf("%lld", domain1 - domain2);
}