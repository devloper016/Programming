class Solution {
public:
    vector<vector<int>> ans;
    void sol(int id, int k,vector<int>&current,int n)
    {
        if(current.size()==k)   
        {
            ans.push_back(current);
            return;
        }
        for(int i=id;i<n+1;i++){
            current.push_back(i);
            sol(i+1,k,current,n);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        sol(1,k,current,n);
        return ans; 
    }
};
