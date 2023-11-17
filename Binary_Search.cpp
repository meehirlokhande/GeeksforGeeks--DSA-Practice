https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty=School,Basic&sortBy=submissions

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
    /*    int low=0;
        int high=n-1;
      
        while(low<=high)
        {
             int mid=(low+high)/2;
             if(arr[mid]==k)
             {
                 return mid;
             }
             else if(arr[mid]<k)
             {
                 low=mid+1;
             }
             else if(arr[mid]>k){
                 high=mid-1;
             }
             else{
                 return -1;
             }
        } */
        int arr2[10];
        for(int i=0; i < 10; i++)
        {
            arr2[i] = -1; // Initialize to an invalid value
        }
       for(int i=0;i<n;i++)
       {
           if(arr[i]==k)
           {
               arr2[0]=i;
           }
           
       }
       if(arr2[0]==NULL)
       {
           return -1;
       }
       else{
           return arr2[0];
       }
       
    }
};
