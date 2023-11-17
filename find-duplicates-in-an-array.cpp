https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&difficulty=School,Basic,Easy&sortBy=submissions



class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        sort(arr,arr+n);
        
        vector<int>output;
        for(int i=0;i<n-1;i++)
        {
        if(arr[i]==arr[i+1])
        {
            output.push_back(arr[i]);
          while(arr[i+1]==arr[i])
        {
            i++;
        }
        }
        
        
        }
        if(output.size()==0)
        {
            cout<<"-1";
        }
        return output;
    }
        
};


