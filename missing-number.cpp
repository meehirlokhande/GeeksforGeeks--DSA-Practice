https://www.geeksforgeeks.org/problems/missing-number4257/1?page=4&difficulty=School,Basic&sortBy=submissions

int missingNumber(int A[], int N)
{
    sort(A,A+N-1);
    int n=1;
    for(int i=0;i<N;i++)
    {
        if(A[i]==n)
        {
            n++;
        }else{
           return n;
        }
    }
