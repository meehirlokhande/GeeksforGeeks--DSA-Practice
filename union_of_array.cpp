https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1?page=1&difficulty=School,Basic&sortBy=submissions
//this code has runtime error//
#include <vector>
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        int sum=0;
       for(int i=0;i<n;i++)
       {
           int temp=a[i];
           for(int j=0;j<m;j++)
           {
               if(temp==b[j])
               {
                   sum++;
               }
           }
       }
       
        return (n+m)-sum;
    }
};


