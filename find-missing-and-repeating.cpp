https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&sortBy=submissions

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>result;
        unordered_map<int,int>umap;
        for(auto i:arr)
        {
            umap[i]++;
            if(umap[i]==2)
            {
                result.push_back(i);
            }
        }
        for(int j=1;j<=n;j++)
        {
            if(umap.find(j)==umap.end())
            {
                result.push_back(j);
            }
        }
        
        return result;
        
    }
};
