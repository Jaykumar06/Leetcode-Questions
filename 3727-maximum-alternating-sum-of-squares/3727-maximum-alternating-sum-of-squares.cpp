class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        vector<long long> sq;

        for (int x : nums) {
            sq.push_back(1LL * x * x);
        }

        sort(sq.begin(), sq.end());

        int n = sq.size();
        int positiveSlots = (n + 1) / 2;

        long long ans = 0;

        // Largest elements go to positive positions
        for (int i = n - positiveSlots; i < n; i++) {
            ans += sq[i];
        }

        // Remaining elements go to negative positions
        for (int i = 0; i < n - positiveSlots; i++) {
            ans -= sq[i];
        }

        return ans;
    }
};