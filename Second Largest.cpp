https://www.geeksforgeeks.org/problems/second-largest3735/1?page=1&difficulty=Easy&sortBy=submissions

#include <stack>
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    stack<int> sub;
	    for(int i=0;i<n;i++)
	    {
	        if((sub.empty()==true)||(sub.top()!=arr[i]))
	        {
	            sub.push(arr[i]);
	        }
	        
	    }
	    for(int i=0;i<1;i++)
	    {
	        sub.pop();
	    }
	    if(sub.empty()==true)
	    {
	        return -1;
	    }else{
	    return sub.top();
	    }
	    
	}

};
