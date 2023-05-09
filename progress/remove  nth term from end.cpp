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
   
 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
       
        
        ListNode*temp=head;
        
        ListNode*preve=NULL;
        ListNode*next=NULL;
        ListNode*crr=head;
         if (temp == NULL || temp->next == NULL)
         return NULL;
       
        while(crr!=NULL){
            next=crr->next;
            crr->next=preve;
            preve=crr;
            crr=next;
        }
        temp=preve;
         
        ListNode*temp1=temp;
         if(n==1 && temp1->next!=NULL){
             temp1=temp1->next;
      
         } 
        for (int i = 1; temp != NULL && i <n - 1; i++){
            temp = temp->next;
        }temp->next=temp->next->next;
       
         ListNode*temp2=temp1;
        ListNode*preve1=NULL;
        ListNode*next1=NULL;
        ListNode*crr1=temp1;
        
        while(crr1!=NULL){
            next1=crr1->next;
            crr1->next=preve1;
            preve1=crr1;
            crr1=next1;
        }
       
        temp2=preve1;
     
      return temp2;  
       
    }
 };
