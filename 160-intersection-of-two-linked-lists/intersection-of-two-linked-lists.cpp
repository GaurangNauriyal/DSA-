/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *current1 = headA;
        ListNode *current2 = headB;
        while(current1 != NULL)
        {
            while(current2 != NULL)
            {
                if(current1 == current2)  
                    return current1;
                current2 = current2->next;
            }   
            current2 = headB;
            current1 = current1->next;
        }
        return NULL;
    }
};