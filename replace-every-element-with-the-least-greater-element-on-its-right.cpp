https://www.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1?page=4&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

code 1: o(n2)

vector<int>result(n,-1);
            for(int p=0;p<n;p++)
            {
                int check=arr[p];
                int smallest=INT_MAX;
                for(int i=p+1;i<n;i++)
                {
                    if(arr[i]<=smallest && arr[i]>check)
                    {
                        smallest=arr[i];
                    }
                    
                }
                if(smallest!=INT_MAX)
                {
                    result[p]=smallest;
                }
                
            }
            return result;
