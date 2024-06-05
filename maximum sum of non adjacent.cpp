https://www.geeksforgeeks.org/problems/max-sum-without-adjacents2430/1

class Solution{
public:	

    int helper(int arr[],int idx, int dp[])
    {
        if(idx<0)
        {
            return 0;
        }
        if(idx==0)
        {
            return arr[idx];
        }
        if(dp[idx] != -1 )
        {
            return dp[idx];
        }
        
        int include = helper(arr,idx-2,dp)+arr[idx];
        int exclude = helper(arr,idx-1,dp)+0;
        
         dp[idx]= max(include,exclude);
        return dp[idx];
        
    }


	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int dp[n+1];
	    memset(dp,-1,sizeof(dp));
	    
	    int ans = helper(arr,n-1,dp);
	    return ans;
	}
};
