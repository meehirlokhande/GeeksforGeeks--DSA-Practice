https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?page=4&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

class Solution{
public:
    int findMin(int arr[], int n){
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        return min;
    }
};
