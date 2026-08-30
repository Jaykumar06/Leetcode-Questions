class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n= arr.size();

        unordered_map<int,int>store;//key,value
       
        for( int num:arr){
            store[num]++;
        }
        unordered_set<int>s;// store the frequency of the values...
        for( auto it:store){// use to iterate in the map...
            if(s.count(it.second)){
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};