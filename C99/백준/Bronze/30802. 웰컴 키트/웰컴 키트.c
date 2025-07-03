#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int size[6];
	int t, p;
	int t_answer = 0;
	scanf("%d", &n);
	for (int i = 0; i < 6; i++) {
		scanf("%d", &size[i]);
	}
	scanf("%d %d", &t, &p);
	for (int i = 0; i < 6; i++) {
		t_answer += (size[i] + (t - 1)) / t;
	}
	printf("%d\n%d %d", t_answer, n / p,n % p);
}