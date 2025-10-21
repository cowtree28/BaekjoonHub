#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int is_end(int n) {
	char s[10];
	sprintf(s, "%d", n);
	int len = strlen(s);
	int six = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '6') {
			six++;
			if (six >= 3)
				return 1;
		}
		else
			six = 0;
	}
	return 0;
}

int main() {
	int n,end = 0, i = 666;
	scanf("%d", &n);
	while (1) {
		if (is_end(i)) {
			end++;
			if (end == n) {
				printf("%d", i);
				break;
			}
		}
		i++;
	}
	return 0;
}