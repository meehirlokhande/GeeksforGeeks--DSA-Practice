https://www.geeksforgeeks.org/problems/subset-sums2234/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=subset-sums

class Solution {
  public:
    void solve(vector<int>& arr,vector<int>&subsetSum,int idx,int sum){
        if(idx==arr.size()){
            subsetSum.push_back(sum);
            return;
        }
        // Not take first element
        solve(arr,subsetSum,idx+1,sum);
        // take first element
        solve(arr,subsetSum,idx+1,sum+arr[idx]);

    }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>subsetSum;
        solve(arr,subsetSum,0,0);
        return subsetSum;
    }
};
