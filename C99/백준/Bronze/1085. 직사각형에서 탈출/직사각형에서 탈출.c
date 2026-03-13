#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	if (x <= y && x <= w - x && x <= h - y) 
		printf("%d", x);
	else if (y < x && y < w - x && y < h - y)
		printf("%d", y);
	else if (w - x < x && w - x < y && w - x < h - y)
		printf("%d", w - x);
	else
		printf("%d", h - y);
}