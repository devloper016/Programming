class Solution {
public:
    int mini(int n,int *arr){
        if(n==0 || n==1){
            return 1;
        }
        if(arr[n]!= -1){
            return arr[n];
        }
        int output = mini(n-1,arr)+mini(n-2,arr);
        arr[n] = output;
        return output;
    }
    int a(int n){
        int *arr = new int[n+1];
        for(int i=0;i<=n;i++){
            arr[i]=-1;
        }
        return mini(n,arr);
    }
    int climbStairs(int n) {
       return a(n);
    } 
};
