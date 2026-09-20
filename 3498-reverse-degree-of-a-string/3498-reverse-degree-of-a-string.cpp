class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int count=0;
        int result=0;

        for(int i=0;i<n;i++){
            count='z'-s[i] +1;
            result +=(i+1)*count;
        }
        return result;

    }
};