https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
  SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
    
    
    if(head==NULL){
        return newnode;
    }
        SinglyLinkedListNode*temp=head;
        while(temp->next!=NULL){
        temp=temp->next;
        }temp->next=newnode;
        return head;
}

