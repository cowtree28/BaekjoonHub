#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define r 31
#define M 1234567891

int main() {
	int n;
	scanf("%d", &n);
	char L[50];
	for (int i = 0; i < n; i++) {
		scanf(" %c", &L[i]);
	}
	long long int sum = 0;
	long long int pow = 1;
	for (int i = 0; i < n; i++) {
		sum += ((L[i] - 'a' + 1) * pow);
		sum %= M;
		pow = (pow * r) % M;
		
	}
	printf("%lld", sum);

}