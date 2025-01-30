https://www.geeksforgeeks.org/problems/better-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=better-string
TC-O(2^N)

class Solution {
  public:
  
    void solve(string& str,unordered_set<string>& ans,string subset,int idx){
        if(idx==str.length()){
           
            ans.insert(subset);
            return;
        }
        // do not take
        solve(str,ans,subset,idx+1);
        
        //take
        subset.push_back(str[idx]);
        solve(str,ans,subset,idx+1);
    
    }
    
    
    string betterString(string str1, string str2) {
        // code here
        unordered_set<string> ans1;
        unordered_set<string>ans2;
        
        solve(str1,ans1,"",0);
        solve(str2,ans2,"",0);
        int count1 =  ans1.size();
        int count2  = ans2.size();
        if(count1 >= count2){
            return str1;
        }else{
            return str2; 
        }
    }
};
