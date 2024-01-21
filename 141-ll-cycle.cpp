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
    bool hasCycle(ListNode *head) {
        bool cycle = false;
        vector<ListNode*> visited;
        ListNode *temp = head;
        if(head == nullptr){
            return false;
        }
        while(!cycle && temp->next != nullptr){
            if(find(visited.begin(), visited.end(), temp->next) != visited.end()){
                cycle = true;
            }else{
                visited.push_back(temp);
                temp = temp->next;
            }
        }
        return cycle;
    }
};
