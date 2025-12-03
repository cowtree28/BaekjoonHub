#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Y_RATE_TIME 30
#define Y_RATE_PRICE 10
#define M_RATE_TIME 60
#define M_RATE_PRICE 15

int main() {
	int n, temp;
	int total_y_price = 0, total_m_price = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		total_y_price += ((temp / Y_RATE_TIME) + 1)* Y_RATE_PRICE;
		total_m_price += ((temp / M_RATE_TIME) + 1) * M_RATE_PRICE;
	}
	if (total_m_price < total_y_price)
		printf("M %d", total_m_price);
	else if (total_m_price > total_y_price)
		printf("Y %d", total_y_price);
	else
		printf("Y M %d", total_m_price);
}