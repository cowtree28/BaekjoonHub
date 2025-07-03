#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int answer = 0, now = 0;
	answer = (v-a) / (a - b) + 1;
	if ((v-a) % (a-b))
		answer += 1;
	printf("%d", answer);
}