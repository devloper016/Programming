class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<char,pair<int,int>> mp;
        mp['N'] = {0,1};
        mp['E'] = {1,0};
        mp['S'] = {0,-1};
        mp['W'] = {-1,0};
        
        set<string> vis;
        vis.insert("0,0");
        
        int x=0,y=0;
        for(auto it : path){
            auto cur = mp[it];
            int dx = cur.first;
            int dy = cur.second;
            
            x+=dx;
            y+=dy;
            
            string tmp = to_string(x)+","+to_string(y);
            if(vis.find(tmp)!=vis.end()) return true;
            
            vis.insert(tmp);
        }
        return false;
    }
};
