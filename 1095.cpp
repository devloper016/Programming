/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &m) {
        int n = m.length();
        int s=1,e=n-2;
        int pk=0;
        while(s<e){
            int mid = s+(e-s)/2;
            if(m.get(mid)<m.get(mid+1)) s = mid+1;
            
            else e = mid;
        }
        pk = s;
        
        int l =0,h=pk;
        while(l<h){
            int mid = l+(h-l)/2;
            
            if(m.get(mid)<target) l=mid+1;
            else h=mid;
        }
        if(m.get(l)==target) return l;
        
        int low=pk+1,high=n-1;
        while(low<high){
            int mid = low+(high-low)/2;
            
            if(m.get(mid)>target) low=mid+1;
            
           else high=mid;
        }
        if(m.get(low)==target) return low;
        return -1;
    }
};
