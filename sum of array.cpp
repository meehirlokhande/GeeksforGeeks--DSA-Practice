https://www.geeksforgeeks.org/problems/sum-of-array-elements2502/1?page=1&difficulty=School,Basic&sortBy=submissions

int sumElement(int arr[],int n)
{
    //Your code here
    int hold=arr[0];
    for(int i=1;i<n;i++)
    {
        hold=hold+arr[i];
    }
    return hold;
}
