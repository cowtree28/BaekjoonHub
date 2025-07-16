#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	const char* str1 = *(const char**)a;
	const char* str2 = *(const char**)b;
	if (strlen(str1) - strlen(str2) != 0)
		return strlen(str1) - strlen(str2);
	else
		return strcmp(str1,str2);
}
int main() {
	int n;
	scanf("%d", &n);
	char** words;
	words = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
		words[i] = (char*)malloc(sizeof(char) * 50);
	for (int i = 0; i < n; i++)
		scanf("%s", words[i]);
	qsort(words, n, sizeof(char*), compare);
	for (int i = 0; i < n; i++) {
		if(i != 0 && strcmp(words[i-1],words[i]))
			printf("%s\n", words[i]);
		else if(i == 0)
			printf("%s\n", words[i]);
	}
}