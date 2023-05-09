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
    ListNode* deleteMiddle(ListNode* head) {
         if(head->next==NULL ){
            return NULL;}
        ListNode*temp=head;
        int count=-1;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }temp=head;
        
        if(count%2==1){
            int m=(count+1)/2;
            cout<<m;
            for(int i=0 && temp->next!=NULL;i<m-1;i++){
            temp=temp->next;
             }temp->next=temp->next->next;
        
        } if(count%2==0){
            int n=count/2;
            cout<<n;
            for(int i=0 ;i<n-1;i++){
                
            temp=temp->next;
             }temp->next=temp->next->next;
        
        }
       
        return head;
    }
};
