https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=perfect-sum-problem

class Solution {
  public:
  
  void solve(vector<int>& arr,int sum,int target,int &count,int idx ){
      if(idx == arr.size()){
          if(sum == target){
              count++;
              return;
          }
          return;
      }
      
      //do not take 
      solve(arr,sum,target,count,idx+1);
      
      solve(arr,sum+arr[idx],target,count,idx+1);
  }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int count=0;
        vector<int>subset;
        solve(arr,0,target,count,0);
        return count;
    }
};
