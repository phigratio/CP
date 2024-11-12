// User function Template for C++

class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        Node* prev=NULL;
        Node* temp=head;
        while(temp->next)
        {
            prev=temp;
            temp=temp->next;
            
        }
        
        Node * dummy=temp;
        prev->next=NULL;
        dummy->next=head;
        return dummy;
    }
};