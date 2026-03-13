#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i = 0, now = 1;
	while (1) {
		i++;
		if (now >= n)
			break;
		now += i * 6;
	}
	printf("%d", i);
}