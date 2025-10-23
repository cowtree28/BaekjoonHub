#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name[11];
	int age, weight;
	while (1) {
		scanf("%s %d %d", name, &age, &weight);
		if (name[0] == '#' && age == 0 && weight == 0)
			return 0;
		printf("%s ", name);
		if (age >= 18 || weight >= 80)
			printf("Senior\n");
		else
			printf("Junior\n");
	}
}