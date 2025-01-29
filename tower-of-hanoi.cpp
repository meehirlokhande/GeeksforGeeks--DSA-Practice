https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
class Solution {
  public:
    // You need to complete this function
    void solve(int n,int from,int to,int aux,int &count){
        if(n==1){
            count++;
            return;
        }
        
        solve(n-1,from,aux,to,count);
        count++;
        solve(n-1,aux,to,from,count);
        
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        if(n==0){
            return 0;
        }
        // Your code here
        int count =0;
        solve(n,from,to,aux,count);
        return count;
       
    }
};
