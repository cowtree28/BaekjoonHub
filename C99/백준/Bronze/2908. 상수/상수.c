#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main() {
	char realnum1[4];
	char realnum2[4];
	int num1 = 0, num2 = 0;
	scanf("%s %s", realnum1, realnum2);
	int temp = realnum1[0];
	realnum1[0] = realnum1[2];
	realnum1[2] = temp;
	temp = realnum2[0];
	realnum2[0] = realnum2[2];
	realnum2[2] = temp;
	num1 = ((realnum1[0] - '0') * 100) + ((realnum1[1] - '0') * 10) + (realnum1[2] - '0');
	num2 = ((realnum2[0] - '0') * 100) + ((realnum2[1] - '0') * 10) + (realnum2[2] - '0');
	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
}