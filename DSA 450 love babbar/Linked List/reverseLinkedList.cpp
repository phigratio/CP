/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
        // code here
        // return head of reversed list
        Node* nod_prev=NULL;
        Node* nod_curr=head;
        Node* nod_next=NULL;
        
        while(nod_curr != NULL)
        {
        nod_next=nod_curr->next;
        nod_curr->next=nod_prev;
        nod_prev=nod_curr;
        nod_curr=nod_next;
        
        }
        
        return nod_prev;
        
        
        
        
        
        
      
    }
};