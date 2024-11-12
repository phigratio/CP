/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
    struct node
    {
        int data;
        struct node* next;

        node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    struct node *reverseIt(struct node *head, int k) {
        // Complete this method
        if(!head || k<=1)
        {
            return head;
        }
        
        node* dummy=new node(0);
        node* curr=head;
        node* prevGroupEnd=dummy;
        node* prev=NULL;
        node* next=NULL;
        
        dummy->next=head;
        
        while(curr!=NULL)
        {
          int cnt=0;
          node* groupStart=curr;
          while(curr && cnt<k)
          {
              next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;
              cnt++;
          }
          
          prevGroupEnd->next=prev;
          groupStart->next=curr;
          prevGroupEnd=groupStart;
        }
        
        return dummy->next;
    }
};