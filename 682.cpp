class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int n1;
        int n2;
        int ans=0;
        for(auto op : ops){
            if(op == "+"){
                n1 = s.top();
                s.pop();
                n2 = n1+s.top();
                s.push(n1);
                s.push(n2);
            }
            else if(op == "D"){
                s.push(s.top()*2);
            }
            else if(op=="C"){
                s.pop();
            }
            else{
                s.push(stoi(op));
            }
        }
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
     }
};
