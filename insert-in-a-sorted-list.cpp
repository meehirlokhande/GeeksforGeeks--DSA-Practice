https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1?page=12&sortBy=submission

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        struct Node* p=head;
        struct Node* q=NULL;
        int x = data;
        
        struct Node* t = new Node(x);
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(q==NULL){
            t->next = head;
            head=t;
        }else{
            t->next = q->next;
            q->next = t;
        }
        
        return head;
    }
};
