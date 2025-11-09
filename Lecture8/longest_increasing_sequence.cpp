#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = {500, 2, 3, 1000, 1, 250};
    int n = nums.size();
    vector<int> dp(n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (nums[j] < nums[i]) {
          dp[i] = max(dp[i], dp[j] + 1);
        }
      }
    }
    int ans = *max_element(dp.begin(), dp.end());
    cout << ans << '\n';
    return 0;
}
