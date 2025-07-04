#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define r 31
#define M 1234567891

int main() {
	int n;
	scanf("%d",&n);
	char L[50];
	for (int i = 0; i < n; i++) {
		scanf(" %c", &L[i]);
	}
	long long int sum = 0;
	for (int i = 0; i < n; i++) {
		int temp = L[i] - 'a' + 1;
		for (int j = 0; j < i; j++) {
			temp = (temp * r) % M;
		}
		sum += temp % M;
	}
	sum = sum % M;
	printf("%d", sum);

}