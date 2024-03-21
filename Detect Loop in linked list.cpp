https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=1&sortBy=submissions

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
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    // bool detectLoop(Node* head)
    // {
    //     struct Node *p=head;
    //     struct Node *q=head;
    //     do
    //     {
    //         p=p->next;
    //         if(q!=NULL){
    //             q=q->next;
    //         }else{
    //             q=NULL;
    //         }
    //     }while(q&&q && p!=q);
    //     if(p==q)
    //     {
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }
    
    bool detectLoop(Node* head)
{
    struct Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

};
