#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char line[20];
	int lines_number = 0;
	
	while (scanf("%[^\n]%*c", line) != EOF)
		lines_number++;
	printf("%d", lines_number);
}