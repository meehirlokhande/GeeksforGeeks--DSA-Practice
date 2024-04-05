https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1?page=3&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int>temp;
        for(int i=0;i<K;i++)
        {
            for(int j=0;j<K;j++)
            {
                temp.push_back(arr[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};
