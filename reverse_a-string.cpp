https://www.geeksforgeeks.org/problems/reverse-a-string/1?page=1&difficulty=School,Basic&sortBy=submissions

code 1: only passing few test cases
class Solution
{
    public:
    string reverseWord(string str)
    {
       string reversed;
        for(int i=str.size()-1;i>=0;i--)
        {   
            char alpha= str[i];
            reversed=reversed+alpha;
        }
        return reversed;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
code 2:

class Solution
{
    public:
    string reverseWord(string str)
    {
       int start=0;
       int last=str.size()-1;
       while(last>start)
       {
           swap(str[start],str[last]);
           start++;
           last--;
       }
       return str;
    }
};
