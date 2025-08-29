#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int l[3],is_sum_max;
	int max = 0, other_sum = 0;

	while (1) {
		max = 0, is_sum_max = 0, other_sum = 0;
		for (int i = 0; i < 3; i++) {
			scanf("%d", &l[i]);
			if (max < l[i])
				max = l[i];
		}
		if (max == 0)
			return 0;
		for (int i = 0; i < 3; i++) {
			if (!is_sum_max)
				if (l[i] == max) {
					is_sum_max = 1;
					continue;
				}
			other_sum += l[i];
		}
		if (other_sum > max) {
			if (l[0] == l[1] && l[1] == l[2]) {
				printf("Equilateral\n");
				continue;
			}
			if (l[0] == l[1] || l[1] == l[2] || l[2] == l[0]) {
				printf("Isosceles\n");
				continue;
			}
			printf("Scalene\n");
			continue;
		}
		printf("Invalid\n");
	}
}