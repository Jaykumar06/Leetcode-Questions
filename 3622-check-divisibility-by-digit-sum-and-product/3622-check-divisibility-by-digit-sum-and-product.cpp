class Solution {
public:
    bool checkDivisibility(int n) {
        int orignal =n;
        int sum =0;
        int prod =1;

        while( n > 0){
            int x= n% 10;

            sum += x;
            prod *= x;

            n/=10;
        }
        int total = sum + prod;
        return orignal % total ==0;
    }
};