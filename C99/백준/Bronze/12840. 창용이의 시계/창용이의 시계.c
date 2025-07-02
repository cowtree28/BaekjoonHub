#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int h, m, s;
	scanf("%d %d %d", &h, &m, &s);
	int n;
	scanf("%d", &n);
	int t;
	int temp = h * 3600 + m * 60 + s;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t == 1) {
			int scan;
			scanf("%d", &scan);
			temp = (temp + scan) % (3600 * 24);
		}
		else if (t == 2) {
			int scan;
			scanf("%d", &scan);
			temp -= scan;
			while (temp < 0) {
				temp += 60 * 60 * 24;
			}
		}
		else if (t == 3) {
			printf("%d %d %d\n", temp / (60 * 60), (temp % (60 * 60)) / 60, temp % 60);
		}
	}

}