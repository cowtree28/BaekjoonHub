#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s, g, h, answer;
	int cola, cider;

	scanf("%d %d %d", &s, &g, &h);
	if (s <= g && s <= h)
		answer = s;
	else if (g <= s && g <= h)
		answer = g;
	else
		answer = h;
	scanf("%d %d", &cola, &cider);
	if (cola < cider)
		answer += cola;
	else
		answer += cider;
	answer -= 50;
	printf("%d", answer);

}