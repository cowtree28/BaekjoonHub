#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c = 0, answer = 0;
	char temp;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			scanf(" %c", &temp);
			if (temp == 'F')
				if ((c / 8 + c % 8) % 2 == 0)
					answer++;
			c++;
		}
	printf("%d", answer);
}