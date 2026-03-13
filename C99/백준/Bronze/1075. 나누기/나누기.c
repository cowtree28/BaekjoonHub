#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, f;
	scanf("%d %d", &n, &f);
	if (n >= 100) {
		n /= 100;
		n *= 100;
	}
	for (int i = 0; i < 100; i++) {
		if ((n + i) % f == 0) {
			printf("%02d", i);
			break;
		}
		
	}
}