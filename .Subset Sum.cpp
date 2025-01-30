 Subset Sum
Moderate
0/80
Average time to solve is 25m
Contributed by
104 upvotes
Problem statement
You are given an array 'A' of 'N' integers. You have to return true if there exists a subset of elements of 'A' that sums up to 'K'. Otherwise, return false.



For Example
'N' = 3, 'K' = 5, 'A' = [1, 2, 3].
Subset [2, 3] has sum equal to 'K'.
So our answer is True.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4 13
4 3 5 2
Sample Output 1 :
No
Sample Input 2 :
5 14
4 2 5 6 7
Sample Output 2 :
Yes
Constraints :
1 <= 'N' <= 10^3
1 <= 'A[i]' <= 10^3
1 <= 'K' <= 10^3
Time Limit: 1 sec


code: TC: 0(2^N)

void solve(int n,int k,vector<int>&a,int idx,int sum,int &count){
    if(idx == n){
        if(sum==k){
            count++;
            return;
        }
        return;
    }

    solve(n,k,a,idx+1,sum,count);

    solve(n,k,a,idx+1,sum+a[idx],count);

    
}

bool isSubsetPresent(int n, int k, vector<int> &a)
{
    // Write your code here
    int count=0;
    solve(n,k,a,0,0,count);
    if(count > 0){
        return true;
    }
    return false;
}
