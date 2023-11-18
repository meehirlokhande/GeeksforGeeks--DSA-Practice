https://www.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty=School,Basic&sortBy=submissions

// here static_cast<long long> is used to avoid overflow //
:) NEW THING LEARNED 

  class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    long long sum=static_cast<long long>(n)*(n+1)/2;
	    return sum;
	}
};
