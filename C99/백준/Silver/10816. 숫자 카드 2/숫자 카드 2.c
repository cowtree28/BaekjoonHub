#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, m, temp;
	int set[20000001];
	memset(set, 0, (long long int)sizeof(int) * (long long int)20000001);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		set[temp + 10000000]++;
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &temp);
		printf("%d ", set[temp + 10000000]);
	}
}