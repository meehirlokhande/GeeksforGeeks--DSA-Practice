https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?page=3&sortBy=submissions

/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        if(head!=NULL){
        int count=0;
        struct Node* p=head;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        for(int i=0;i<count/2;i++)
        {
            head=head->next;
        }
        return head->data;
        }else{
            return -1;
        }
    }
};
