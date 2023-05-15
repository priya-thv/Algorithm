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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        ListNode* next=NULL;
        ListNode* current=head;
        ListNode* preve=NULL;
        int sum=0;
        int count=0;
        while (current != NULL) {
        
        current = current->next;
        count++;
        }
        while(temp!=NULL){
            next=temp->next;
            temp->next=preve;
            preve=temp;
            temp=next;
        }
        head=preve;
        temp=preve;
        for(int i=0;i<count;i++){
            sum=((temp->val)*pow(2,i))+sum;
            temp=temp->next;

        }
         return sum;
    }
};
