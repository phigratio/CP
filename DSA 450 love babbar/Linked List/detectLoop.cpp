// User function template for C++

/*

struct Node
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
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        if(!head)
        return false;
        // your code here
        bool flag=false;
        Node* curr=head;
        Node* twice=head;
        while(twice!=NULL and twice->next!=NULL)
        {
            curr=curr->next;
            
            twice=twice->next->next;
            if(curr==twice)
            {
                flag=true;
                break;
            }
            
            
           
        }
        
        return flag;
    }
};