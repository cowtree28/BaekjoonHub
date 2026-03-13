#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n,count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		int i;
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				break;
			}
		}
		if(i == num)
			count++;
	}
	printf("%d", count);
}