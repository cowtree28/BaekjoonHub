#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int wavelength;
	scanf("%d", &wavelength);
	if (620 <= wavelength && wavelength <= 780)
		printf("Red");
	else if (590 <= wavelength && wavelength < 620)
		printf("Orange");
	else if (570 <= wavelength && wavelength < 590)
		printf("Yellow");
	else if (495 <= wavelength && wavelength < 570)
		printf("Green");
	else if (450 <= wavelength && wavelength < 495)
		printf("Blue");
	else if (425 <= wavelength && wavelength < 450)
		printf("Indigo");
	else if (380 <= wavelength && wavelength < 425)
		printf("Violet");
	return 0;
}