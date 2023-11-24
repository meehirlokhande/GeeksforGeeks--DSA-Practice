https://www.geeksforgeeks.org/problems/searching-a-number0324/1?page=2&difficulty=School,Basic&sortBy=submissions

class Solution{
public:
	int search(int arr[], int n, int k) {
	    for(int i=0;i<n;i++){
	        if(arr[i]==k)
	        {
	            int hold=i+1;
	            return hold;
	        }
	       
	    }
	     return -1;
	        
	}
};
