#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return *((int*)a) - *((int*)b);
}

int main() {
	int dwarfs[9];
	for (int i = 0; i < 9; i++)
		scanf("%d", &dwarfs[i]);
	int dwarfs_7[7], is_find = 0;
	for (int i = 0; i < 9; i++) {
		if (is_find)
			break;
		for (int j = i + 1; j < 9; j++) {
			int sum = 0;
			for (int k = 0; k < 9; k++) {
				if (k == i || k == j)
					continue;
				sum += dwarfs[k];
			}
			if (sum == 100) {
				int idx = 0;
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					dwarfs_7[idx++] = dwarfs[k];
				}
				is_find = 1;
				break;
			}
		}
	}
	qsort(dwarfs_7, 7, sizeof(int), compare);
	for (int i = 0; i < 7; i++)
		printf("%d\n", dwarfs_7[i]);
}