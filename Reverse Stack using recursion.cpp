https://www.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reverse-a-stack

class Solution{
public:
    
    void insert(stack<int>&St,int temp){
        if(St.empty()){
            
            St.push(temp);
            return;
        }
        
        int top = St.top();
        St.pop();
        insert(St,temp);
        St.push(top);
        
        
    }


    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        int temp = St.top();
        St.pop();
        Reverse(St);
        insert(St,temp);
        return;
    }
};
