/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
   Node* flat(Node* head, Node* rest = nullptr) {
  if (!head) return rest;
  head->next = flat(head->child, flat(head->next, rest));
  if (head->next) head->next->prev = head;
  head->child = nullptr;
  return head;
}
    Node* flatten(Node* head) {
        
       return flat(head);
    }
};