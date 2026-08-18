class TimeMap {
public:
    unordered_map<string, map<int, string>> KVStore;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        KVStore[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = KVStore[key].upper_bound(timestamp);
        return it == KVStore[key].begin() ? "" : prev(it)->second;
    }
};
