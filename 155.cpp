class MinStack {
public:
    vector<int> stc;
    vector<int> min_stc;
    int min_val;
    MinStack() {
       
    }
    
    void push(int val) {
        stc.push_back(val);
        if(min_stc.empty())
        {
            min_val = min(val, val);
            min_stc.push_back(min_val);
        }
        else
        {
          min_val=min(val, min_stc[min_stc.size()-1]);  
          min_stc.push_back(min_val);
        }
        
    }
    
    void pop() {
      
        stc.pop_back();
        min_stc.pop_back();
      
    }
    
    int top() {
        return stc[stc.size()-1];
    }
    
    int getMin() {
        return min_stc[min_stc.size()-1];
    }
};
