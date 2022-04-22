class MyHashMap {
public:
    vector<int> ans;
    MyHashMap() {
        ans.resize(1e6+1,-1);
    }
    
    void put(int key, int value) {
     ans[key] = value;
    }
    
    int get(int key) {
        if(ans[key]==-2) return -1;
        return ans[key];
    }
    
    void remove(int key) {
        ans[key] = -2;
    }
};
