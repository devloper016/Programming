class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        vector<string> ans;
        for(auto &it: arr){
            string t = "";
            for(int i=0;i<it.size();i++){
                for(int j=i;j<it.size();j++){
                    string tmp = it.substr(i,j-i+1);
                    bool uni=true;
                    for(auto &z: arr){
                        if(&it != &z && z.find(tmp)!= string::npos){
                            uni=false;
                            break;
                        }
                    }
                    if(uni && (t.empty() || tmp.size()<t.size() || (tmp.size()==t.size() && tmp<t))){
                         t = tmp;
                    }
                }
            }
            ans.push_back(t);
        }
        return ans;
    }
};
