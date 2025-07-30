#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n,group = 0;
	char word[101];
	int alphabet[26];
	int is_group;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		is_group = 1;
		for (int i = 0; i < 26; i++)
			alphabet[i] = 0;
		scanf("%s", word);
		alphabet[word[0] - 'a']++;
		int word_len = strlen(word);
		for (int i = 1; i < word_len; i++) {
			if (word[i - 1] == word[i])
				continue;
			else {
				alphabet[word[i] - 'a']++;
				if (alphabet[word[i] - 'a'] > 1) {
					is_group = 0;
					break;
				}
			}
		}
		if (is_group)
			group++;
	}
	printf("%d", group);
}