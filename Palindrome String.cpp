https://www.geeksforgeeks.org/problems/palindrome-string0817/1?page=1&difficulty=Easy&sortBy=submissions

#include <stack>
#include<string>
class Solution{
public:	

	int isPalindrome(string S)
	{
	    stack<char> word;
	    int N=S.length();
	    string arr[N];
	    
	    for(int i=0;i<S.length();i++)
	    {
	        word.push(S[i]);
	    }
	    int count=0;
	    while(word.empty()!=true)
	    {
	        arr[count]=word.top();
	        word.pop();
	        count++;
	    }
	    string reversed="";
	    for(int i=0;i<N;i++)
	    {
	        reversed=reversed+arr[i];
	    }
	    if(S!=reversed)
	    {
	        return 0;
	    }else{
	        return 1;
	    }
	}

};

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <stack>

class Solution{
public:	

	int isPalindrome(string S)
	{
	    stack<char> word;
	    int N=S.length();
	    string reverse="";
	    
	    for(int i=0;i<S.length();i++)
	    {
	        word.push(S[i]);
	    }
	   
	    while(word.empty()!=true)
	    {
	       reverse =reverse+word.top();
	       word.pop();
	        
	    }
	    if(S!=reverse)
	    {
	        return 0;
	    }else{
	        return 1;
	    }
	}
	    

};

//---------------------------------------------------------------------------------------------------------------------------


class Solution{
public:	

	int isPalindrome(string S)
	{
	   int left=0;
	   int right=S.length()-1;
	   while(left<right)
	   {
	       if(S[left]!=S[right])
	       {
	           return 0;
	       }
	       left++;
	       right--;
	   }
	   return 1;
	}
	    

};
