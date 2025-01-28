https://www.geeksforgeeks.org/problems/generate-all-binary-strings/0

class Solution{
public:
    
    void solve(int num,vector<string>&result,string str,int lastBit){
        if(str.length() == num){
            result.push_back(str);
            return;
        }
        // 0 
        solve(num,result,str + "0",0);
        
        if(lastBit==0){
            solve(num,result,str+"1",1);
        }
        
    }
    
    vector<string> generateBinaryStrings(int num){
        vector<string>result;
        
        solve(num,result,"",0);
        return result;
    }
};
