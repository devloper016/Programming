class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        queue<int> q;
        int n = arr.size();
        int mx = INT_MIN;
        for(int i=1;i<arr.size();i++){
            q.push(arr[i]);
            mx = max(mx,arr[i]);
        }
        int ele=arr[0];
        int streak = 0;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            if(ele>node){
                streak++;
                q.push(node);
            }
            if(ele<node){
                streak=1;
                q.push(ele);
                ele = node;
            }
            if(streak==k || ele==mx){
                return ele;
            }
        }
        return -1;
    }
};
