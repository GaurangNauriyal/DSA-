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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        ListNode*temp1 = head;
        for(int i=0; i<k-1; i++){
            temp1 = temp1->next;
        }
        ListNode* temp2 = head;
        for(int i = 0; i<size - k; i++){
            temp2 = temp2->next;
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};