#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[10002], b[10002];
    int sum[10003] = { 0 };
    scanf("%s %s", a, b);

    int a_len = strlen(a);
    int b_len = strlen(b);
    int max_len = a_len > b_len ? a_len : b_len;

    for (int i = 0; i < a_len; i++)
        sum[max_len - i] += a[a_len - 1 - i] - '0';

    for (int i = 0; i < b_len; i++)
        sum[max_len - i] += b[b_len - 1 - i] - '0';

    for (int i = max_len; i >= 1; i--) {
        if (sum[i] >= 10) {
            sum[i - 1] += sum[i] / 10;
            sum[i] %= 10;
        }
    }

    int start = (sum[0] != 0) ? 0 : 1;
    for (int i = start; i <= max_len; i++)
        printf("%d", sum[i]);

    return 0;
}
