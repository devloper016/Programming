class Solution {
public:
    vector<int> ps(vector<int> &heights,vector<int> &p){
        stack<int> st;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            if(st.empty()){
                p[i]=-1;
            }
            else p[i]=st.top();
            st.push(i);
        }
        return p;
    }
    vector<int> ns(vector<int> &heights,vector<int> &n){
        stack<int> s;
        for(int i=heights.size()-1;i>=0;i--){
            while(!s.empty()&&heights[s.top()]>=heights[i]) s.pop();
            if(s.empty()) n[i]= heights.size();
            else n[i]=s.top();
            s.push(i);
        }
        return n;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> p(heights.size(),0);
        vector<int> n(heights.size(),heights.size());
        ps(heights,p);
        ns(heights,n);
        int ans = 0;
        for(int i=0;i<heights.size();i++){
            int area = (n[i]-p[i]-1)*heights[i];
            ans = max(ans,area);
        }
        return ans;
    }
};
