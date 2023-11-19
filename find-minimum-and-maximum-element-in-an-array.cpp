https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&difficulty=School,Basic&sortBy=submissions

#include <algorithm>
pair<long long, long long> getMinMax(long long a[], int n) {
    
   (sort(a,a+n));
    return make_pair(a[0],a[n-1]);
   
}
