class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        map<int,long long int> mp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            mp.insert({arr[i],1});
        }
        for(int i=1;i<arr.size();i++){
            auto it2 = mp.find(arr[i]);
            long long int count = 0;
            for(int j=0;j<arr.size();j++){
                
                if(arr[i]%arr[j]==0){
                    auto it = mp.find(arr[i]/arr[j]);
                    auto itt = mp.find(arr[j]);
                    if(it!=mp.end()){
                        count += (it->second)*(itt->second);
                    }
                }
            }
            it2->second += count;
        }
        long long int sum = 0;
        for(auto part: mp){
            sum += part.second;
        }
        return sum%(1000000007);
    }
};
