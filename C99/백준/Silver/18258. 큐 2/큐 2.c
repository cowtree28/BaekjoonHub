//1158
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int queue[2000000];
int front = -1, rear = -1;
int N;

void push(int n) {
	queue[++rear] = n;
}
int pop() {
	if (is_empty()) return -1;
	return queue[++front];
}
int size() {
	return rear - front;
}
int is_empty() {
	return rear == front;
}
int func_front() {
	if (is_empty()) return -1;
	return queue[front + 1];
}
int func_rear() {
	if (is_empty()) return -1;
	return queue[rear];
}


int main() {
    char tmp[10];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
        scanf("%s", tmp);
        if (!(strcmp(tmp, "push"))) {
            int tmpN = 0;
            scanf("%d", &tmpN);
            push(tmpN);
        }
        else if (!(strcmp(tmp, "pop"))) {
            printf("%d\n", pop());
        }
        else if (!(strcmp(tmp, "size"))) {
            printf("%d\n", size());
        }
        else if (!(strcmp(tmp, "empty"))) {
            printf("%d\n", is_empty());
        }
        else if (!(strcmp(tmp, "front"))) {
            printf("%d\n", func_front());
        }
        else if (!(strcmp(tmp, "back"))) {
            printf("%d\n", func_rear());
        }
	}
}