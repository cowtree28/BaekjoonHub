#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int sum = 0;
	char num[5];
	scanf("%s", num);
	if (strlen(num) == 4)
		sum = 20;
	else if (strlen(num) == 3 && num[1] == '0')
		sum = 10 + (num[2] - '0');
	else if (strlen(num) == 3 && num[2] == '0')
		sum = (num[0] - '0') + 10;
	else
		sum = (num[0] - '0') + (num[1] - '0');
	printf("%d", sum);

}