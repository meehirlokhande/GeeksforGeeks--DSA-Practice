https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=2&sortBy=submissions

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           int count=0;
           struct Node* p = head;
           strAuct Node* q = head;
           int trigger=0;
           while(p!=NULL)
           {
               count++;
               p=p->next;
           }
           if(n>count){
               return -1;
           }else{
           int length=count-n;
           while(trigger!=length)
           {
               q=q->next;
               trigger++;
           }
           return q->data;
           }
    }
};
