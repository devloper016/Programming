typedef pair<long long,long long> pi;
typedef long long ll;
class Solution {
public:
    static bool cmp(pi a,pi b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        vector<int> ans;
        set<string> pos;
        set<string> neg;
        vector<pair<int,int>> pq;
        for(string s:positive_feedback)
            pos.insert(s);
        for(string s1:negative_feedback)
            neg.insert(s1);
        for(int i=0;i<report.size();i++)
        {
            string s="";
            string s1=report[i];
            ll sum=0;
            for(char c:s1)
            {
               
                if(c==' ')
                {
                    if(pos.find(s)!=pos.end())
                    sum+=3;
                    if(neg.find(s)!=neg.end())
                    sum-=1;
                    s.clear();
                    continue;
                }
                    s+=c;
            }
             if(pos.find(s)!=pos.end())
                    sum+=3;
                if(neg.find(s)!=neg.end())
                    sum-=1;
            pq.push_back({sum,student_id[i]});
        }
        sort(pq.begin(),pq.end(),cmp);
        for(int i=0;i<pq.size(),k>0;i++,k--)
        {
            ans.push_back(pq[i].second);
        }
        return ans;
    }
};
