#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int n, m, v, q[1000],front = -1,rear = -1;

int queue_is_empty() {
	return front == rear;
}

int queue_front() {
	if (queue_is_empty()) return -1;
	return q[front + 1];
}

void queue_push(int n) {
	q[++rear] = n;
}

int queue_pop() {
	if (queue_is_empty()) return -1;
	return q[++front];
}

void dfs(int** graph, int* visited, int now) {
	for (int i = 1; i <= n; i++) {
		if (visited[i] == 0 && graph[now][i] == 1) {
			visited[i] = 1;
			printf("%d ", i);
			dfs(graph, visited, i);
		}
	}
}

void bfs(int **graph) {
	int* visited = (int*)calloc(n + 1, sizeof(int));
	visited[v] = 1;
	queue_push(v);
	while (!queue_is_empty()) {
		for (int i = 1; i < n + 1; i++) {
			if (visited[i] == 0 && graph[queue_front()][i] == 1) {
				queue_push(i);
				visited[i] = 1;
			}
		}
		printf("%d ", queue_pop());
	}
}

int main() {
	scanf("%d %d %d", &n, &m, &v);
	int** graph = (int**)calloc(n + 1, sizeof(int*));
	for (int i = 0; i <= n; i++)
		graph[i] = (int*)calloc(n + 1, sizeof(int));
	int dot1, dot2;
	for (int i = 0; i < m;i++) {
		scanf("%d %d", &dot1, &dot2);
		graph[dot1][dot2] = 1;
		graph[dot2][dot1] = 1;
	}

	int* visited = (int*)calloc(n + 1, sizeof(int));
	visited[v] = 1;
	printf("%d ", v);
	dfs(graph,visited,v);
	printf("\n");
	bfs(graph);
	printf("\n");
}