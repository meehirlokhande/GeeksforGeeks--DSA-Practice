https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&difficulty=School,Basic&sortBy=submissions


class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        int count=0;
        while(count<N)
        {
            if(arr[count]!=X)
            {
                count++;
            }
            else{
                return count;
            }
        }
        
        return -1;
        
        
    }
};
