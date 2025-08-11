#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int q, d, n, p, c;
	for (int i = 0; i < t; i++) {
		q = 0, d = 0, n = 0, p = 0;
		scanf("%d", &c);
		while (c > 0) {
			if (c >= 25) {
				c -= 25;
				q++;
			}
			else if (c >= 10) {
				c -= 10;
				d++;
			}
			else if (c >= 5) {
				c -= 5;
				n++;
			}
			else if (c >= 1) {
				c -= 1;
				p++;
			}
		}
		printf("%d %d %d %d\n", q, d, n, p);
	}
}