#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int i) {
  if (i >= nums.size()) return 0;
  return max(nums[i] + solve(nums, i + 2), solve(nums, i + 1));
}

int main() {
    vector<int> nums = {500, 2, 3, 1000, 1, 250};
    int ans = solve(nums, 0);
    cout << ans << '\n';
    return 0;
}
