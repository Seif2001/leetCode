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
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=nullptr){
            tempB = headB;
            while(tempB!=nullptr){
                if(tempA == tempB){
                    return tempA;
                }
                tempB = tempB->next;
            }
            tempA = tempA->next;
        }
        return nullptr;
        
    }
};
