#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	char isbn[14];
	scanf("%s", isbn);
	int check = isbn[12] - '0';
	int sum = 0;
	int is_star;
	for (int i = 0; i < 12; i++) {
		if (isbn[i] == '*') {
			if ((i + 1) % 2 == 0)
				is_star = 1;
			else
				is_star = 0;
			continue;
		}
		else if ((i + 1) % 2 == 0)
			sum += (isbn[i] - '0') * 3;
		else
			sum += (isbn[i] - '0');
	}
	for (int i = 0; i < 10; i++) {
		if ((10 - ((sum + (i * (int)pow(3, is_star))) % 10)) % 10 == check) {
			printf("%d", i);
			return 0;
		}
	}
}