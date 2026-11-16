/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp, *prev,*curr;
    temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    curr=head;
    prev=NULL;
    
    if(curr->next==NULL)
    {
        return NULL;
    }
    int s=c-n+1;

    if(n==c)
    {
        temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    while(s>1)
    {
        prev=curr;
        curr=curr->next;
        s--;
    }
    prev->next=curr->next;
    free(curr);

    return head;
}