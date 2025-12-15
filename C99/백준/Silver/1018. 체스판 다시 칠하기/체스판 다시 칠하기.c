#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int count_repaint_square(char** board, int x, int y) {
	int wrong = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((j + i) % 2 == 0 && board[y + i][x + j] != 'W')
				wrong++;
			else if ((j + i) % 2 == 1 && board[y + i][x + j] != 'B')
				wrong++;
		}
	}
	if (wrong > 32) // 만약 색깔이 반대가 더 효율적인 경우
		wrong = (8 * 8) - wrong;
	return wrong;
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	char **board = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
		board[i] = (char*)malloc(sizeof(char) * m);

	for (int i = 0; i < n; i++)
		scanf("%s", board[i]);

	int min = 33;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int wrong = count_repaint_square(board, j, i);
			if (wrong < min)
				min = wrong;
		}
	}
	printf("%d", min);
}