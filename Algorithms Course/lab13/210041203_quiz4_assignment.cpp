#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(const vector<vector<int>> &graph, int start_node)
{
  vector<bool> visited(graph.size(), false);
  queue<int> q;

  visited[start_node] = true;
  q.push(start_node);

  while (!q.empty())
  {
    int node = q.front();
    q.pop();

    cout << node << " ";
    for (int neighbor : graph[node])
    {
      if (!visited[neighbor])
      {
        visited[neighbor] = true;
        q.push(neighbor);
      }
    }
  }
}

int main()
{

  vector<vector<int>> graph = {
      {1, 2},
      {0, 3, 4},
      {0, 4},
      {1, 5},
      {1, 2, 5},
      {3, 4}};

  int start_node = 0;
  cout << "BFS traversal starting from node " << start_node << ": ";
  bfs(graph, start_node);
  cout << endl;

  return 0;
}
