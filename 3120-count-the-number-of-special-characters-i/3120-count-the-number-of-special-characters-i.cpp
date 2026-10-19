class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.length();
        int count=0;
        unordered_map<char,int>mp;

        for( char &ch:word){
            mp[ch]++;
        }
       for (char ch = 'a'; ch <= 'z'; ch++) {
            if (mp.count(ch) && mp.count(ch - 'a' + 'A')){
                count++;
            }
        }
        return count;
    }
};