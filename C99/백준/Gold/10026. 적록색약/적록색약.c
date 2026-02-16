#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void dfs(char **graph, bool** visited, int x, int y, int graph_size) {
	//printf("%d %d 방문함\n", y, x);
	visited[y][x] = true;
	if (y != 0 && visited[y - 1][x] == false && graph[y - 1][x] == graph[y][x]) {
		//printf("위 이동\n");
		dfs(graph, visited, x, y - 1, graph_size);
	}
	if (y != graph_size - 1 && visited[y + 1][x] == false && graph[y + 1][x] == graph[y][x]) {
		//printf("아래 이동\n");
		dfs(graph, visited, x, y + 1, graph_size);
	}
	if (x != 0 && visited[y][x - 1] == false && graph[y][x - 1] == graph[y][x]) {
		//printf("왼쪽 이동\n");
		dfs(graph, visited, x - 1, y, graph_size);
	}
	if (x != graph_size - 1 && visited[y][x + 1] == false && graph[y][x + 1] == graph[y][x]) {
		//printf("오른쪽 이동\n");
		dfs(graph, visited, x + 1, y, graph_size);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	char** arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (char*)malloc(sizeof(char) * n);
	}

	char** rg_arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		rg_arr[i] = (char*)malloc(sizeof(char) * n);
	}
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			scanf(" %c", &arr[i][j]);
			rg_arr[i][j] = arr[i][j];
			if (rg_arr[i][j] == 'R')
				rg_arr[i][j] = 'G';
		}
	int rg_zones = 0;
	int normal_zones = 0;
	
	bool** normal_visited = (bool**)malloc(sizeof(bool*) * n);
	bool** rg_visited = (bool**)malloc(sizeof(bool*) * n);
	for (int i = 0; i < n; i++) {
		normal_visited[i] = (bool*)malloc(sizeof(bool) * n);
		rg_visited[i] = (bool*)malloc(sizeof(bool) * n);
		for (int j = 0; j < n; j++) {
			normal_visited[i][j] = false;
			rg_visited[i][j] = false;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (normal_visited[i][j] == false) {
				normal_zones++;
				dfs(arr, normal_visited, j, i, n);
			}
			if (rg_visited[i][j] == false) {
				rg_zones++;
				dfs(rg_arr, rg_visited, j, i, n);
			}
		}
	}

	printf("%d %d", normal_zones, rg_zones);
}