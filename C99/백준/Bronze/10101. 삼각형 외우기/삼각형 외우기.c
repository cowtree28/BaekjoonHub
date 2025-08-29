#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ang1, ang2, ang3;
	scanf("%d %d %d", &ang1, &ang2, &ang3);
	if (ang1 + ang2 + ang3 != 180) {
		printf("Error");
		return 0;
	}
	if (ang1 == ang2 && ang2 == ang3) {
		printf("Equilateral");
		return 0;
	}
	if (ang1 == ang2 || ang2 == ang3 || ang3 == ang1) {
		printf("Isosceles");
		return 0;
	}
	printf("Scalene");
}