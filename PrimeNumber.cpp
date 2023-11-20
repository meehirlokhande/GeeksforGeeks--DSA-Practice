https://www.geeksforgeeks.org/problems/prime-number2314/1?page=1&difficulty=School,Basic&sortBy=submissions

class Solution{
public:
    int isPrime(int N){
        if(N==0||N==1)
        {
            return 0;
        }
        else if(N==2)
        {
            return 1;
        }
        else
        {
        for(int i=2;i<=sqrt(N);i++)
        {
            if(N%i==0)
            {
                return 0;
            }
            
        }
        return 1;
        }
    }

    
};
