#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int answer = 1;
	char sentence[1000000];
	gets(sentence);
	for (int i = 0; i < strlen(sentence); i++)
		if (sentence[i] == ' ')
			answer++;
	if (sentence[0] == ' ')
		answer--;
	if (sentence[strlen(sentence) - 1] == ' ')
		answer--;
	printf("%d", answer);
}