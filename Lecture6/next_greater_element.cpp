#include<bits/stdc++.h>

using namespace std;

vector<int> next_greater_element(vector<int>& arr) {
  int n = arr.size();
  vector<int> ans(n, -1);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[i]) {
        ans[i] = arr[j];
        break;
      }
    }
  }
  return ans;
}

// Time Complexity - O(n ^ 2)

// {3, 5, 1, 7, 9, 2, 17,  2, 10}
// [5, 7, 7, 9, 17, 17, -1, 10, -1]
// stk - 17, 9, 7, 5, 3

vector<int> next_greater_element2(vector<int>& arr) {
  int n = arr.size();
  stack<int> stk;
  vector<int> ans(n, -1);
  for (int i = n - 1; i >= 0; i--) {
    while (!stk.empty() && stk.top() <= arr[i]) {
      stk.pop();
    }
    if (!stk.empty()) ans[i] = stk.top();
    stk.push(arr[i]);
  }
  return ans;
}

// Time Complexity - O(n)

int main() {
    vector<int> arr = {3, 5, 1, 7, 9, 2, 17, 2, 10};
    vector<int> ans = next_greater_element(arr);
    for (auto x : ans) cout << x << " ";
    cout << '\n';
    return 0;
}
