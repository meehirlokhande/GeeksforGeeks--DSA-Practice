

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        set<int>box;
        vector<int>ans;
        for(auto x:a){
            box.insert(x);
        }
        for(auto y:b){
            box.insert(y);
        }
        for(auto z:box){
            ans.push_back(z);
        }
        return ans;
        
    }
};
