#include<bits/stdc++.h>

using namespace std;

// 1 green
// 2 red

bool has_cycle(vector<vector<int>>& adj, int u, vector<int>& color) {
  if (color[u] == 1) return true;
  if (color[u] == 2) return false;
  color[u] = 1;
  for (auto v : adj[u]) {
    bool z = has_cycle(adj, v, color);
    if (z) return z;
  }
  color[u] = 2;
  return false;
}

int main() {
    vector<vector<int>> graph = {{1, 0}, {0, 1}};
    vector<int> color(2);
    bool ans = false;
    for (int i = 0; i < 2; i++) {
      ans |= has_cycle(graph, i, color);
    }
    cout << ans << '\n';
    return 0;
}
