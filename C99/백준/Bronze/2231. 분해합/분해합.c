#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int answer = 0;
	for (int i = 1; i < n; i++) {
		int temp = i;
		int sum = i;
		while (1) {
			sum += temp % 10;
			temp /= 10;
			if (temp <= 0)
				break;
		}
		if (sum == n) {
			answer = i;
			break;
		}
	}
	printf("%d", answer);
}