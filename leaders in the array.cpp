https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sortBy=submissions

//solution -1 {giving runtime error though code is correct }

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int count=0;
            
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>=a[j])
                {
                    count++;
                }
            }
            if(count==(n-(i+1)))
            {
                arr.push_back(a[i]);
            }
        }
        return arr;
        
    }
};

// Solution - 2 

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> arr;
        int maxRight=a[n-1];
        arr.push_back(maxRight);
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=maxRight)
            {
                
                maxRight=a[i];
                arr.push_back(maxRight);
            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};


