https://www.geeksforgeeks.org/problems/power-of-2-1587115620/1?page=1&difficulty=School,Basic&sortBy=submissions

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if(n==0)
        {
            return false;
        }
        else{
        while(n > 0 && n%2==0)
        {
           n=n/2;
        }
        if(n==1)
            {
                return true;
            }
            else{
                return false;
            }
        }
    }
};
