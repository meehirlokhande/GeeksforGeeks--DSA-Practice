https://geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?page=9&sprint=94ade6723438d94ecf0c00c3937dad55&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        
        if (head == NULL || head->next == NULL) {
        return head;
    }
        
        ListNode *p=head;
        ListNode *t=NULL;
        while(p->next!=NULL)
        {
            t=p;
            p=p->next;
            
        }
        t->next=NULL;
        p->next=head;
        head=p;
        return head;
        
    }
};
