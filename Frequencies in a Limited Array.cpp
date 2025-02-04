https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        unordered_map<int,int> umap;
        vector<int>ans;
        for(auto x:arr){
            umap[x]++;
        }
        for(int i=1;i<=arr.size();i++)
        {
            if(umap.find(i)==umap.end()){
                ans.push_back(0);
            }else if(umap.find(i)!=umap.end()){
                ans.push_back(umap[i]);
            }
        }
        
        return ans;
        
    }
};
