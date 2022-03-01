class Solution {
public:
    void rev(vector<char>&s,int st,int e){
        if(st>=e){
            return;
        }
        swap(s[st++],s[e--]);
        rev(s,st,e);
    }
    void reverseString(vector<char>& s) {
      rev(s,0,s.size()-1);
    }
};
