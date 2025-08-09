#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int pow(int value, int exponent) {
	int sum = 1;
	for (int i = 0; i < exponent; i++) {
		sum *= value;
	}
	return sum;
}

int main() {
	int b,answer = 0;
	char n[28];
	scanf("%s %d", n, &b);
	int n_len = strlen(n);
	for (int i = 0; i < n_len; i++) {
		if ('0' <= n[i] && n[i] <= '9')
			answer += (n[i] - '0') * pow(b, n_len - i - 1);
		else
			answer += (n[i] - 'A' + 10) * pow(b, n_len - i - 1);
	}
	printf("%d", answer);
}