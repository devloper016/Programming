class MedianFinder {
public:
    priority_queue<int> mx;
    priority_queue<int,vector<int>,greater<int>> mn;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int l = mx.size();
        int r = mn.size();
        if(l==0){
            mx.push(num);
        }
        else if(l==r){
            if(num<mn.top()){
                mx.push(num);
            }
            else{
                int tmp = mn.top();
                mn.pop();
                mx.push(tmp);
                mn.push(num);
            }
        }
        else{
            if(mn.size()==0){
                if(num>mx.top()){
                    mn.push(num);
                }
                else{
                    int tmp = mx.top();
                    mx.pop();
                    mn.push(tmp);
                    mx.push(num);
                }
            }
            else if(mn.top()<=num){
                mn.push(num);
            }
            else{
                if(num<mx.top()){
                    int tmp = mx.top();
                    mx.pop();
                    mn.push(tmp);
                    mx.push(num);
                }
                else{
                    mn.push(num);
                }
            }
        }
    }
    
    double findMedian() {
        int l = mx.size();
        int r = mn.size();
        if(l>r){
            return ((double)mx.top());
        }
        return ((double)mx.top()+(double)mn.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
