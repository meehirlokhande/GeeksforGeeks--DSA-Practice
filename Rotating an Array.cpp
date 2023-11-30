https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=3&difficulty=School,Basic&sortBy=submissions

#include <queue>
class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        queue<int>array;
        for(int i=0;i<n;i++)
        {
            array.push(arr[i]);
        }
        while(d>0)
        {
            int forinserting=array.front();
            array.pop();
            array.push(forinserting);
            d--;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=array.front();
            array.pop();
        }
    }
};
