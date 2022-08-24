class Solution {
public:
    bool checkPowersOfThree(int n) {
        stack<int> st;
        int i=1;
        while(i<=n){
            st.push(i);
            i *=3;
        }
        int sum=0;
        while(st.size()!=0){
            if(sum+st.top()<=n){
                sum += st.top();
            }
            if(sum == n){
                return true;
                break;
            }
            st.pop();
        }
        cout<<sum;
        return false;
    }
};
