#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char first_char;
	scanf("%c", &first_char);
	switch (first_char) {
	case 'M':
		printf("MatKor");
		break;
	case 'W':
		printf("WiCys");
		break;
	case 'C':
		printf("CyKor");
		break;
	case 'A':
		printf("AlKor");
		break;
	case '$':
		printf("$clear");
		break;
	}
	
}