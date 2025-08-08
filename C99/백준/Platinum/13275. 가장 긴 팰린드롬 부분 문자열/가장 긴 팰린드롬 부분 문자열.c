#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int manacher(char* string, int* p, int s_len) {
	int t_len = s_len * 2 + 3;
	char* t = malloc(sizeof(char) * t_len);
	t[0] = '^';
	for (int i = 0; i < s_len; i++) {
		t[2 * i + 1] = '#';
		t[(i + 1) * 2] = string[i];
	}
	t[s_len * 2 + 1] = '#';
	t[s_len * 2 + 2] = '$';
	int c = 0, r = 0,max = 0;
	for (int i = 1; i < t_len - 1; i++) {
		int mirror = 2 * c - i;

		if (i < r)
			p[i] = (p[mirror] < (r - i) ? p[mirror] : r - i);

		while (t[i - p[i] - 1] == t[i + p[i] + 1])
			p[i]++;
		if (r < i + p[i]) {
			c = i;
			r = i + p[i];
		}
		if (p[i] > max)
			max = p[i];
	}
	return max;
}
int main() {
	char s[100001];
	scanf("%s", s);
	int s_len = strlen(s);
	int* p = (int*)calloc(s_len * 2 + 3, sizeof(int));
	printf("%d",manacher(s, p, s_len));
}