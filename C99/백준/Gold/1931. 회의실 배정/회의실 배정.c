#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int start[], int finish[], int left, int right) {
    if (left >= right) return;

    int pivot = finish[(left + right) / 2];
    int i = left, j = right;

    while (i <= j) {
        while (finish[i] < pivot || (finish[i] == pivot && start[i] < start[(left + right) / 2])) i++;
        while (finish[j] > pivot || (finish[j] == pivot && start[j] > start[(left + right) / 2])) j--;


        if (i <= j) {
            int temp = finish[i];
            finish[i] = finish[j];
            finish[j] = temp;

            temp = start[i];
            start[i] = start[j];
            start[j] = temp;

            i++; j--;
        }
    }

    quick_sort(start, finish, left, j);
    quick_sort(start, finish, i, right);
}

int main() {
    int N, start[100000], finish[100000], meeting = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &start[i], &finish[i]);
    }

    quick_sort(start, finish, 0, N - 1);

    int now_time;
    for (int i = 0, now_time = 0; i < N; i++) {
        if (now_time <= start[i]) {
            meeting++;
            now_time = finish[i];
        }
    }


    printf("%d", meeting);
    return 0;
}
