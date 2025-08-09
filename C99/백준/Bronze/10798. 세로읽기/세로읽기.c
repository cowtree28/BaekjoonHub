#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char word[5][16] = {0};
	for (int i = 0; i < 5; i++)
		scanf("%s", word[i]);
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 5; j++) {
			if (word[j][i] == '\0')
				continue;
			putchar(word[j][i]);
		}
	}
}