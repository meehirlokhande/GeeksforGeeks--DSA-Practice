https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1?page=7&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        unordered_map<char,char>s1Tos2;
        unordered_map<char,char>s2Tos1;
        
        if(str1.length()!=str2.length())
        {
            return false;
        }
        
        for(int  i=0;i<str1.length();i++)
        {
            char char1= str1[i];
            char char2=str2[i];
            
            if((s1Tos2.find(char1)!=s1Tos2.end() && s1Tos2[char1]!= char2) || (s2Tos1.find(char2)!=s2Tos1.end() && s2Tos1[char2]!=char1)){
                return false;
            }
            
            s1Tos2[char1]=char2;
            s2Tos1[char2]=char1;
        }
        return true;
    }
};
