#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2;
	while (1) {
		scanf("%d %d", &num1, &num2);
		if (!num1 & !num2) break;
		printf("%s\n", num1 > num2 ? "Yes" : "No");
	}
}