

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        if(!head || !head->next)
        {
            return head;
        }
        Node* curr=head;
        Node* prev=NULL;
        unordered_map<int,bool> visited;
        while(curr->next)
        {
            
            if(visited.find(curr->data)==visited.end())
            {
                visited[curr->data]=true;
                prev=curr;
                curr=curr->next;
            }
            else
            {
                
                prev->next=curr->next;
                curr=curr->next;
               
            }
        }
        
        if(visited.find(curr->data)!=visited.end())
        {
           prev->next=NULL;
        }
        
        
        return head;
    }
};