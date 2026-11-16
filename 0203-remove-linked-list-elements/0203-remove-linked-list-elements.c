/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
      struct ListNode* temp, *prev;
      temp=head;
      prev=NULL;
      int key=val;
        
     
      while(temp!=NULL)
      {
        if(temp->val!=key)
        {
            prev=temp;
            temp=temp->next;
        }
        

        else if(head->val==key)
        {
            temp=head;
            head=temp->next;
            free(temp);
            temp=head;
        }
        else{
            struct ListNode* next=temp->next;
                prev->next=next;

               
                free(temp);
                temp=next;
        }

      }

      return head;
      
} 