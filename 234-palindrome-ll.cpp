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
 #include <unordered_map> 
#include <utility>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast!=nullptr && fast->next != nullptr ){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while(slow!=nullptr){
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        while(prev!=nullptr && head!=nullptr){
            if(prev->val != head->val){
                return false;
            }
            prev= prev->next;
            head = head->next;
        }
        return true;
    }
};
