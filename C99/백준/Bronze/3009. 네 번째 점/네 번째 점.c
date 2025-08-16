#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct dot{
	int x;
	int y;
}dot;

int main() {
	dot dots[3];
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &dots[i].x, &dots[i].y);
	if (dots[0].x == dots[1].x)
		printf("%d ", dots[2].x);
	else if (dots[1].x == dots[2].x)
		printf("%d ", dots[0].x);
	else
		printf("%d ", dots[1].x);
	if (dots[0].y == dots[1].y)
		printf("%d", dots[2].y);
	else if (dots[1].y == dots[2].y)
		printf("%d", dots[0].y);
	else
		printf("%d", dots[1].y);
}