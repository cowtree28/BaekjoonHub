#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int mod[42] = { 0 }, tmp, sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &tmp);
		mod[tmp % 42]++;
	}
	for (int i = 0; i < 42; i++)
		if (mod[i] != 0)
			sum++;
	printf("%d", sum);
	return 0;
}