#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a1, a0;
	int c, n;

	scanf("%d %d", &a1, &a0);
	scanf("%d %d", &c, &n);

	
	printf("%d", a1 * n + a0 <= c * n && a1 <= c);
		
}