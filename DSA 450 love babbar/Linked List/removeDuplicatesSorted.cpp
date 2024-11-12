/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        
        if(!head || !head->next)
        return head;

        
 
        Node* curr=head;
        while(curr->next!=NULL && curr!=NULL)
        {
            if(curr->next->data==curr->data)
            {
              Node *temp=curr->next;
              curr->next=curr->next->next;
              delete temp;
            }
            else
            {
                curr=curr->next;
            }
          
        }
        
        return head;
    }
};

