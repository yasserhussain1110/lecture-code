#include<bits/stdc++.h>

using namespace std;

struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverse(ListNode* head) {
  ListNode* sentinel = new ListNode();
  // sentinel->next = head;
  ListNode* curr = head;
  while (curr) {
    ListNode* next = curr->next;
    curr->next = sentinel->next;
    sentinel->next = curr;
    curr = next;
  }
  return sentinel->next;
}

int main() {
    ListNode* head = new ListNode(1, 
      new ListNode(2, 
        new ListNode(3,
          new ListNode(4,
            nullptr
          )
        )
      )
    );
    ListNode* curr = head;
    while (curr) {
      cout << curr->val << '\n';
      curr = curr->next;
    }
    ListNode* reverse_head = reverse(head);
    while (reverse_head) {
      cout << reverse_head->val << '\n';
      reverse_head = reverse_head->next;
    }
    return 0;
}
