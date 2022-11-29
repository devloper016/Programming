class RandomizedSet {
    private:
    vector<int>vec;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        for(auto it:vec)
        {
            if(it==val)
            return false;
        }
        vec.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(vec.size()<1)return false;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]==val)
            {
                vec.erase(vec.begin()+i);
                return true;
            }
        }
        return false;
    }
    
    int getRandom() {
        
        return vec[rand()%vec.size()];
    }
};
