#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[6561][6561];

void square(int size, int x, int y) {
	if (size <= 1)
		map[x-1][y-1] = '*';
	else {
		int new_size = size / 3;
		square(new_size, x, y);
		square(new_size, x+new_size, y);
		square(new_size, x+(new_size*2), y);
		square(new_size, x, y+new_size);
		square(new_size, x+(new_size*2), y + new_size);
		square(new_size, x, y+(new_size*2));
		square(new_size, x+new_size, y+(new_size*2));
		square(new_size, x+(new_size*2), y+(new_size*2));
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			map[i][j] = ' ';
	square(n, 1, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%c", map[i][j]);
		putchar('\n');
	}
}