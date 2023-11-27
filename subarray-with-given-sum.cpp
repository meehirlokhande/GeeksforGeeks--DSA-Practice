https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&sortBy=submissions

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int start=0,end=0,sum=0;
        
        while(end<n && (s!=0) || (s==0 && n==1) )
        {
            sum=sum+arr[end];
            while(sum>s)
            {
                sum=sum-arr[start];
                start++;
            }
            if(sum==s)
            {
                return{start+1,end+1};
                
            }
            
            end++;
        }
        return {-1};
        
    }
    
};
