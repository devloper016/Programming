class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int longest = 0;
        unordered_map<int, int> mp;
        
        int left = 0;
        
        for(int right = 0; right < n; right++)
        {
            mp[fruits[right]]++;
            while(left <= right && mp.size() > 2)
            {
                mp[fruits[left]]--;
                
                if(mp[fruits[left]] == 0)
                {
                    mp.erase(fruits[left]);
                }
                
                left++;
            }
            int curr_len = right - left + 1;
            
            longest = max(longest, curr_len);
        }
        
        return longest;
    }
};
