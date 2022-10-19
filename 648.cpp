/*
 * @lc app=leetcode id=648 lang=cpp
 *
 * [648] Replace Words
 */

// @lc code=start
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st;
        for(auto it:dictionary) st.insert(it);
        string ans;
        string word;
        sentence.append(" ");
        for(char ch:sentence){
            if(ch==' '){
                string tmp = "";
                bool flag = false;
                for(char c : word){
                    tmp += c;
                    if(st.find(tmp)!=st.end()){
                        ans += tmp+" ";
                        flag = true;
                        break;
                    }
                }
                if(!flag) ans += word+" ";
                word = "";
            }
            else{
                word += ch;
            }
        }
        while(ans[ans.size()-1]==' ') ans.pop_back();
        return ans;
    }
};
// @lc code=end

