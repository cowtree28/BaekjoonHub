#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, v;

void dfs(vector<vector<int>>& graph, vector<int>& visited, int now_node) {
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 1)
            continue;
        if (graph[now_node][i] == 1) {
            cout << i << " ";
            visited[i] = 1;
            dfs(graph, visited, i);
        }
    }
}

void bfs(vector<vector<int>>& graph, int now_node) {
    queue<int> q;
    vector <int>visited(n+1);
    visited[now_node] = 1;
    q.push(now_node);
    while (!q.empty()) {
        for (int i = 1; i <= n; i++)
            if (visited[i] == 0 && graph[q.front()][i] == 1) {
                visited[i] = 1;
                q.push(i);
            }
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0);

    
    cin >> n >> m >> v;

    vector<vector<int>> graph(n + 1,vector<int>(n + 1));

    int dot1, dot2;
    for (int i = 0; i < m; i++) {
        cin >> dot1 >> dot2;
        graph[dot1][dot2] = 1;
        graph[dot2][dot1] = 1;
    }

    vector <int>visited(n + 1);
    visited[v] = 1;
    cout << v << " ";
    dfs(graph,visited,v);
    cout << "\n";
    bfs(graph, v);
    cout << "\n";
}