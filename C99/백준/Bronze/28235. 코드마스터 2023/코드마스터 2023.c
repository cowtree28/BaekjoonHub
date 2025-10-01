#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char temp[10];
	scanf("%s", temp);
	if (!strcmp("SONGDO", temp))
		printf("HIGHSCHOOL");
	else if (!strcmp("CODE", temp))
		printf("MASTER");
	else if (!strcmp("2023", temp))
		printf("0611");
	else if (!strcmp("ALGORITHM", temp))
		printf("CONTEST");
}