class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.rbegin(),deck.rend());
        deque<int> dq={deck[0]};
        for(int i=1;i<n;i++){
            int tmp = dq.back();
            dq.pop_back();
            dq.push_front(tmp);
            dq.push_front(deck[i]);
        }
        return vector<int>(dq.begin(),dq.end());
    }
};
