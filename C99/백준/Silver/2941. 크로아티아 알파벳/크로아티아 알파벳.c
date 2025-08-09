#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	scanf("%s", word);
	int word_len = strlen(word);
	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == 'd' && word[i + 1] == '-') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i+2]=='=') {
			word[i] = '@', word[i + 1] = '@',word[i+2] = '@';
			word_len -= 2;
		}
		else if (word[i] == 'c' && word[i + 1] == '-') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 'c' && word[i + 1] == '=') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			word[i] = '@', word[i + 1] = '@';
			word_len -= 1;
		}
	}
	printf("%d", word_len);
}