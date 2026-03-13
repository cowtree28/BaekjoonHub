#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int queue[10001];
int front = -1,rear = -1;

void push(int n) {
	queue[++rear] = n;
}
int pop() {
	if (isEmpty()) return -1;
	return queue[++front];
}
int isEmpty(){
	return front == rear;
}
int front_def() {
	if (isEmpty()) return -1;
	return queue[front + 1];
}
int back_def() {
	if (isEmpty()) return -1;
	return queue[rear];
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char temp[6];
		scanf("%s", temp);
		if (!strcmp(temp, "push")) {
			int number;
			scanf("%d", &number);
			push(number);
		}
		else if (!strcmp(temp, "pop"))
			printf("%d\n", pop());
		else if (!strcmp(temp, "size"))
			printf("%d\n", rear - front);
		else if (!strcmp(temp, "empty"))
			printf("%d\n", isEmpty());
		else if (!strcmp(temp, "front"))
			printf("%d\n", front_def());
		else if (!strcmp(temp, "back"))
			printf("%d\n", back_def());
	}
}