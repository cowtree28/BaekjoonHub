#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char t[256];
	while (1) {
		int vowel = 0;
		gets(t);
		int len = strlen(t);
		if (len == 1 && t[0] == '#')
			break;
		for (int i = 0; i < len; i++) {
			switch (t[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel++;
				break;
			}
		}
		printf("%d\n", vowel);
	}
}