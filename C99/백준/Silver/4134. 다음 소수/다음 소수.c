#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(unsigned int x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    for (unsigned int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    unsigned int t, n;
    scanf("%u", &t);
    for (int i = 0; i < t; i++) {
        scanf("%u", &n);
        unsigned int j = n;
        while (!is_prime(j)) {
            j++;
        }
        printf("%u\n", j);
    }
}