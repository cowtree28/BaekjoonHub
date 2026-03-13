#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int card[100];
	for (int i = 0; i < n; i++)
		scanf("%d", &card[i]);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int g = 0; g < n; g++) {
				if (card[i] == card[j] || card[j] == card[g] || card[g] == card[i])
					break;
				if (sum < card[i] + card[j] + card[g] && card[i] + card[j] + card[g] <= m)
					sum = card[i] + card[j] + card[g];
			}
		}
	}
	printf("%d", sum);
}