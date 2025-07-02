#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int two = 0, five = 0;
	for (int i = 1; i <= n; i++) {
		int temp = i;
		while (1) {
			if (temp % 2 == 0) {
				temp /= 2;
				two++;
				
			}
			if (temp % 5 == 0) {
				temp /= 5;
				five++;
			}
			if (temp % 2 != 0 && temp % 5 != 0)
				break;
		}
	}
	if (two < five)
		printf("%d", two);
	else
		printf("%d", five);
}