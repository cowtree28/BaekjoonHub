#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int alpha[26] = { 0 };
	char word[1000001];
	scanf("%s", word);
	int len = strlen(word);
	for (int i = 0; i < len; i++) {
		if ('a' <= word[i] && word[i] <= 'z')
			alpha[word[i] - 'a']++;
		else
			alpha[word[i] - 'A']++;
	}
	int max = -1;
	for (int i = 0; i < 26; i++)
		if (alpha[max] < alpha[i])
			max = i;
	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == alpha[max])
			count++;
	}
	if (count > 1)
		printf("?");
	else
		printf("%c", 'A' + max);
}