class TimeMap {
public:
    unordered_map<string, vector<pair<int,string>>>keyValueTimestampMap;
    
    string getValueAtTimeStamp(string &key, int &timestamp) {
        if(keyValueTimestampMap[key].size()==0 || keyValueTimestampMap[key][0].first>timestamp)return "";
        
        int start=0, end=keyValueTimestampMap[key].size()-1;
        string keyAtTimestamp="";
        while(start<=end) {
            int mid = (start+end)/2;
            if(keyValueTimestampMap[key][mid].first==timestamp){
                keyAtTimestamp = keyValueTimestampMap[key][mid].second;
                break;
            }
            else if(keyValueTimestampMap[key][mid].first<timestamp) {
                keyAtTimestamp = keyValueTimestampMap[key][mid].second;
                start = mid+1;
            } else {
                end = mid-1;
            }
        }
        return keyAtTimestamp;
    }
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keyValueTimestampMap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(keyValueTimestampMap.find(key)==keyValueTimestampMap.end())return "";
        return getValueAtTimeStamp(key, timestamp);
    }
    
};
