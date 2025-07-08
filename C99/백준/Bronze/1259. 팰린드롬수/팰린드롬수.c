#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char number[6];
	while (1) {
		scanf("%s", number);
		if (number[0] == '0')
			break;
		int len = strlen(number);
		int is_palindrome = 1;
		for (int i = 0; i < len / 2; i++) {
			if (number[i] != number[len - i - 1]) {
				is_palindrome = 0;
				break;
			}
		}
		if (is_palindrome)
			printf("yes\n");
		else
			printf("no\n");
	}
}