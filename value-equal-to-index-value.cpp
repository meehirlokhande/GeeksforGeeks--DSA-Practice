https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty=School,Basic&sortBy=submissions

class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> hold;
	    vector<int> zero;
	    
	    int count=0;
	   for(int i=1;i<n+1;i++){
	       if(arr[i-1]==i)
	       {
	           hold.push_back(i);
	           count++;
	       }
	       else{
	           zero.push_back(i);
	       }
	   } 
	   if(count>0)
	   {
	       return hold;
	   }
	   else{
	       return vector<int>();
	   }
	   
	}
};
