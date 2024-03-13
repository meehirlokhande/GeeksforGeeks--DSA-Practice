https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1?page=6&sortBy=submissions

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int>P;
        long long int product;
        for(int i=0;i<nums.size();i++)
        {
            product=1;
            for(int j=0;j<nums.size();j++)
            {
                
                if(j!=i)
                {
                    product=product*nums[j];
                }
                
                
            }
            P.push_back(product);
        }
        return P;   
    }
};
