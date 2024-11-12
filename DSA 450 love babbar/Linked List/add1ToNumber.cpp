// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* addOne(Node* head) {
        Node* temp=NULL;
        Node* prev=NULL;
        Node* curr=head;
        // Your Code here
        // return head of list after adding one
        
        while(curr)
        {
            
            if(curr->data==9)
            {
                if(temp==NULL)
                temp=curr;
            
                if(curr->next==NULL)
                {
                    break;
                }
                curr=curr->next;
            }
            else
            {
                prev=curr;
                temp=NULL;
                curr=curr->next;
            }
        }
        
        if(prev)
        {
            prev->data=(prev->data)+1;
        }
        while(temp)
        {
            temp->data=0;
            temp=temp->next;
            
        }
        
        if(prev==NULL)
        {
            Node* dummy=new Node(1);
            dummy->next=head;
            return dummy;
        }
        
        return head;
    }
};