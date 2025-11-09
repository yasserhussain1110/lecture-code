#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = {500, 2, 3, 1000, 1, 250};
    int n = nums.size();
    vector<int> dp(n + 2);
    for (int i = 2; i < dp.size(); i++) {
      dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 2]);
    }
    cout << dp[n + 1] << '\n';
    return 0;
}
