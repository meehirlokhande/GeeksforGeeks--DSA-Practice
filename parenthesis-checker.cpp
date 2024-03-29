https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1?page=1&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        map<char,char>mapping;
        mapping['}']='{';
        mapping[')']='(';
        mapping[']']='[';
        
        map<char,char>::iterator itr;
        
        stack<char>stck;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='{' || x[i]=='('  || x[i]=='['){
                stck.push(x[i]);
            }else if (x[i]=='}' || x[i]==']'  || x[i]==')'){
                if(stck.empty()){
                    return false;
                }else{
                    
                    char temp=stck.top();
                    itr=mapping.find(x[i]);
                    if(temp==itr->second){
                        stck.pop();
                    }else{
                        return false;
                    }
                    
                    
                }
                
            }
                
        }
        if(stck.empty()){
            return true;
        }
        return false;
    }

};
