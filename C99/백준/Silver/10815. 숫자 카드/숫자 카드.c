#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int set[20000001] = { 0 };

	int n, m,tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		set[tmp + 10000000] = 1;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		printf("%d ", set[tmp + 10000000]);
	}

}