#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<char>>& grid, int cx, int cy) {
  int n = grid.size();
  int m = grid[1].size();
  if (cx < 0 || cx >= n || cy < 0 || cy >= m || grid[cx][cy] == '0') return;
  grid[cx][cy] = '0';
  dfs(grid, cx + 1, cy);
  dfs(grid, cx - 1, cy);
  dfs(grid, cx, cy + 1);
  dfs(grid, cx, cy - 1);
}

int numIslands(vector<vector<char>>& grid) {
  int n = grid.size();
  int m = grid[1].size();
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == '1') {
        ans++;
        dfs(grid, i, j);
      }
    }
  }
  return ans;
}

int main() {
    vector<vector<char>> grid = vector<vector<char>> 
      {{'1','1','0','0','0'}, 
       {'1','1','0','0','0'}, 
       {'0','0','1','0','0'}, 
       {'0','0','0','1','1'}};
    int ans = numIslands(grid);
    cout << ans << '\n';
    return 0;
}

// Time Complexity - O(n * m)
