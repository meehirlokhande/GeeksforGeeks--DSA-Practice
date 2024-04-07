https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?page=3&sprint=94ade6723438d94ecf0c00c3937dad55&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back(arr1[i]);
        }
        for(int j=0;j<m;j++)
        {
            temp.push_back(arr2[j]);
        }
        sort(temp.begin(),temp.end());
        return temp[k-1];
        

    }
};
