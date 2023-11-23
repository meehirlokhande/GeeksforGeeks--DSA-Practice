https://www.geeksforgeeks.org/problems/find-the-median0527/1?page=3&difficulty=School,Basic&sortBy=submissions

#include <vector>
#include <algorithm>
class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		   sort(v.begin(),v.end());
		   int count=0;
		   for(int i=0;i<v.size();i++)
		   {
		       count++;
		   }
		   if(count%2!=0)
		   {
		   int a=count/2;
		   int b=v[a];
		   return b;
		   }else{
		       int t=count/2;
		       int temp=(v[t-1]+v[t])/2;
		       return temp;
		   }
		}
};
