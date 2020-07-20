/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* root=new ListNode();
        ListNode* cur=head;
        ListNode* prev=root;
        while(cur!=NULL){
            if(cur->val==val){
                prev->next=cur->next;
            }
            else{
                prev->next=cur;
                prev=cur;
            }
            cur=cur->next;
        }
        return root->next;
    }
};