https://www.geeksforgeeks.org/problems/peak-element/1?page=2&sortBy=submissions

/* The function should return the index of any
   peak element present in the array */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        if(n==1)
        {
            return 0;
        }
        else{
      for(int i=0;i<n;i++)
      {
          
          if(arr[i]<arr[i+1])
          {
              continue;
          }else{
              return i;
          }
      }
    }
    }
};
