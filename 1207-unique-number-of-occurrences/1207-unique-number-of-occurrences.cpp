class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>store;

        for(int i=0;i<arr.size();i++){
            store[arr[i]]++;
        }

        unordered_set<int>s;
        for(auto &it:store){
            if(s.count(it.second)){
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};