#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void manacher(char* s, int* p, int s_len) {
	int t_len = s_len * 2 + 3;
	char* t = (char*)malloc(sizeof(char) * t_len);
	t[0] = '^';
	int idx = 1;
	for (int i = 0; i < s_len; i++) {
		t[idx++] = '#';
		t[idx++] = s[i];
	}
	t[idx++] = '#';
	t[idx++] = '$';
	int c = 0, r = 0;
	for (int i = 1; i < t_len - 1; i++) {
		int mirror = 2 * c - i;
		if (i <= r)
			p[i] = p[mirror] < r - i ? p[mirror] : r - i;
		while (t[i - 1 - p[i]] == t[i + 1 + p[i]])
			p[i]++;
		if (i + p[i] > r) {
			c = i;
			r = i + p[i];
		}
	}
}
/*
abcba
^#a#b#c#b#a$*/

int main() {
	char* string = (char*)malloc(sizeof(char) * 2000001);
	scanf("%s", string);
	
	int s_len = strlen(string);
	int p_len = s_len * 2 + 3;
	int* p = (int*)calloc(strlen(string) * 2 + 3, sizeof(int));
	
	manacher(string, p, s_len);


	long long int sum = 0;
	for (int i = 0; i < p_len; i++)
		sum += (p[i] + 1) / 2;

	printf("%lld", sum);
}