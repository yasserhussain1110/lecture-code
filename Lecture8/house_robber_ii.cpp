#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int i, vector<int>& dp) {
  if (i >= nums.size()) return 0;
  if (dp[i] != -1) return dp[i];
  dp[i] = max(nums[i] + solve(nums, i + 2, dp), solve(nums, i + 1, dp));
  return dp[i];
}

int main() {
    vector<int> nums = {500, 2, 3, 1000, 1, 250};
    vector<int> dp(nums.size(), -1);
    int ans = solve(nums, 0, dp);
    cout << ans << '\n';
    return 0;
}
