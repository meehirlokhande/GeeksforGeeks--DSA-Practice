https://www.geeksforgeeks.org/problems/element-appearing-once2552/1?page=1&sortBy=submissions


#include <unordered_map>
class Solution{
public:	
	int search(int A[], int N){
	    
	    unordered_map<int,int>Umap;
	    for(int i=0;i<N;i++)
	    {
	        if(Umap.find(A[i])!=Umap.end())
	        {
	            Umap[A[i]]++;
	        }else{
	            Umap[A[i]]=1;
	        }
	    }
	    
	    for(auto it:Umap)
	    {
	        if(it.second==1)
	        {
	            return it.first;
	        }
	    }
	    
	    return -1;
	}
};

//--------------------------------------------------------------------------------------------------------------------------------

class Solution{
public:	
	int search(int A[], int N){
	    
	
	
	for(int i=0;i<N;i++)
	{
	    int count=0;
	    for(int j=0;j<N;j++){
	        if(A[i]==A[j])
	        {
	            count++;
	        }
	    }
	    if(count==1)
	    {
	        return A[i];
	        break;
	    }
	    
	}
	return -1;
	}
};
