/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        // just remove the loop without losing any nodes
        Node* slow=head;
        Node* fast=head;
        Node* prev=nullptr;
        while(fast->next and fast->next->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(slow==fast)
            {
                break;
            }
            
        }
        
        if(slow!=fast)
        return;
        
        slow=head;
        if(slow==fast)
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
            fast->next=NULL;
            return;
        }
        
        while(slow!=fast)
        {
            prev=fast;
            fast=fast->next;
            slow=slow->next;
        }
        prev->next=nullptr;
        return;
        
    }
};