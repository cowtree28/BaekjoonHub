#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct String {
	int pack_price;
	int price;
}String;

int compare_pack_price(const void* a, const void* b) {
	return ((String*)a)->pack_price - ((String*)b)->pack_price;
}

int compare_price(const void* a, const void* b) {
	return ((String*)a)->price - ((String*)b)->price;
}

int main() {
	int n, m, answer = 0;
	scanf("%d %d", &n, &m);
	String* strings = (String*)malloc(sizeof(String) * m);
	String* strings2 = (String*)malloc(sizeof(String) * m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &strings[i].pack_price, &strings[i].price);
		strings2[i].pack_price = strings[i].pack_price;
		strings2[i].price = strings[i].price;
	}
	qsort(strings, m, sizeof(String), compare_pack_price);
	qsort(strings2, m, sizeof(String), compare_price);
	while (n > 0) {
		if (strings2[0].price * n < strings[0].pack_price)
			break;
		if (strings2[0].price * 6 < strings[0].pack_price)
			break;

		answer += strings[0].pack_price;
		n -= 6;
	}
	
	while (n >= 1) {
		answer += strings2[0].price;
		n -= 1;
	}
	printf("%d", answer);
}