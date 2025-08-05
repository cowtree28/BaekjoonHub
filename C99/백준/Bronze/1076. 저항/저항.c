#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int color_value(char* color) {
	if (!strcmp(color, "black"))
		return 0;
	if (!strcmp(color, "brown"))
		return 1;
	if (!strcmp(color, "red"))
		return 2;
	if (!strcmp(color, "orange"))
		return 3;
	if (!strcmp(color, "yellow"))
		return 4;
	if (!strcmp(color, "green"))
		return 5;
	if (!strcmp(color, "blue"))
		return 6;
	if (!strcmp(color, "violet"))
		return 7;
	if (!strcmp(color, "grey"))
		return 8;
	else if (!strcmp(color, "white"))
		return 9;
}


int main() {
	char color1[7], color2[7], color3[7];
	scanf("%s %s %s", color1, color2, color3);
	if (color_value(color1))
		printf("%d", color_value(color1));
	printf("%d", color_value(color2));
	int zero = color_value(color3);
	if(!(!color_value(color1) && !color_value(color2)))
		for (int i = 0; i < zero; i++)
			putchar('0');
}