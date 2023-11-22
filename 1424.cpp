class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<vector<int>>>mp;
        vector<int> res;
        for(int i=0; i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                if(mp.find(i+j)==mp.end()){
                    vector<vector<int>> temp = {{i,nums[i][j]}};
                    mp[i+j]=temp;
                }
                else{
                    vector<vector<int>> temp = mp[i+j];
                    temp.push_back({i, nums[i][j]});
                    mp[i+j]=temp;
                }
            }
        }
        for(auto m:mp){
            for(int i=m.second.size()-1;i>=0;i--){
                res.push_back(m.second[i][1]);
            }
        }

    return res;
    }
};
