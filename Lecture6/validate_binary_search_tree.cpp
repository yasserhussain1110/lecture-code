#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

         //      2
         //  1     3
        // 

bool isValidBST(TreeNode* root, int left, int right) {
  if (root == nullptr) return true;
  bool ans1 = root->val > left && root->val < right;
  bool ans = ans1 && isValidBST(root->left, left, min(right, root->val)) &&
    isValidBST(root->right, max(left, root->val), right);
  return ans;
}

bool isValidBST(TreeNode* root) {
  return isValidBST(root, -1e9, 1e9);
}

int main() {
    TreeNode* node = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    cout << isValidBST(node) << '\n';
    return 0;
}
