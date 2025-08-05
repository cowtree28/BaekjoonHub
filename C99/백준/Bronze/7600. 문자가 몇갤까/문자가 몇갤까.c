#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int alphabets[26];

void reset_alphabets() {
	for (int i = 0; i < 26; i++)
		alphabets[i] = 0;
}

int count_alphabets() {
	int sum = 0;
	for (int i = 0; i < 26; i++)
		sum += alphabets[i];
	return sum;
}

int main() {
	char sentence[251];
	while (1) {
		reset_alphabets();
		gets(sentence);
		int len = strlen(sentence);
		for (int i = 0; i < len; i++) {
			if ('a' <= sentence[i] && sentence[i] <= 'z')
				alphabets[sentence[i] - 'a'] = 1;
			else if ('A' <= sentence && sentence[i] <= 'Z')
				alphabets[sentence[i] - 'A'] = 1;
		}
		if (!strcmp(sentence, "#"))
			return 0;
		printf("%d\n", count_alphabets());
	}
}