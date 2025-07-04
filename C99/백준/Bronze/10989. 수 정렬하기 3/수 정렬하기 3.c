#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int number[10000] = { 0 };
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		number[temp - 1]++;
	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < number[i]; j++) {
			printf("%d\n", i + 1);
			
		}
	}
		
}