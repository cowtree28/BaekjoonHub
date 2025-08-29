#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, n;
	int max_x = -10001, min_x = 10001;
	int max_y = -10001, min_y = 10001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x > max_x)
			max_x = x;
		if (x < min_x)
			min_x = x;
		if (y > max_y)
			max_y = y;
		if (y < min_y)
			min_y = y;
	}
	printf("%d", (max_x - min_x) * (max_y - min_y));
}