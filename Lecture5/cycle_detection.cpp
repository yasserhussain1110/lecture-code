#include<bits/stdc++.h>

using namespace std;

struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool cycle(ListNode* head) {
  if (head == nullptr) return false;
  ListNode* h = head->next;
  ListNode* t = head;
  while (h && t) {
    if (h->next && h->next->next) {
      h = h->next->next;
    } else {
      break;
    }
    if (t->next) {
      t = t->next;
    } else {
      break;
    }
    if (h == t) return true;
  }
  return false;
}

// Time complexity - O(n)
// Mem  complexity - O(1)

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node2;
    ListNode* head = node1;
    cout << cycle(head) << '\n';
    cout << "done" << '\n';
    return 0;
}
