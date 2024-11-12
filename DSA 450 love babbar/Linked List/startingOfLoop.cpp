// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head) {
        // your code here
        if(!head || !head->next)
        return head->data;
        
        Node* slow=head;
        Node* fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                break;
            }
            
        }
        
        if(fast->next && fast->next->next)
        {
        
        if(slow==fast)
        return head->data;
        
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow->data;
        
        }
        else
        {
            return -1;
        }
    }
};