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
      

       /*unordered_map<ListNode *,int> m;
        ListNode* temp=head;
        while(temp!=NULL){
            m[temp]++;
            
            if(m[temp]>1)
            return true;

            temp=temp->next;
        }
        return false;*/
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=NULL && fast->next!=NULL && slow!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
