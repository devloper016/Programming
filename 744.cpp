class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s= -1, e=n , mid;
        while(s+1<e){
            mid = s + (e-s)/2;
            if(letters[mid]<=target) s = mid;
            
            else e = mid;
        }
        return letters[(s+1)%n];
    }
};
