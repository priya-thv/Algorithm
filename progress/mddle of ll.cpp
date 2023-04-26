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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        int middle;
        ListNode*temp=head;
        
        if(temp==NULL){
            return 0;
        }
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        ListNode*hello=head;
        if(count%2==0){
           middle=count/2;
        }
        else{
            middle=(count/2)+1;
        }
        for(int i=0;i<middle;i++){
            hello=hello->next;
        }
        return hello;
        
    }
};
