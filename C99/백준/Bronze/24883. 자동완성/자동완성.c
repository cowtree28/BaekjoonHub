#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char alpha;
	scanf("%c", &alpha);
	if (alpha == 'n' || alpha == 'N')
		printf("Naver D2");
	else
		printf("Naver Whale");
}