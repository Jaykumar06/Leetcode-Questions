class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();

        // int minEleidx= min_element(begin(nums),end(nums))-begin(nums);
        // int maxEleidx= max_element(begin(nums),end(nums))-begin(nums);
    int minEle = nums[0], maxEle = nums[0];
    int minEleidx = 0, maxEleidx = 0;

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] < minEle) {
            minEle = nums[i];
            minEleidx = i;
        }
        if(nums[i] > maxEle) {
            maxEle = nums[i];
            maxEleidx = i;
        }
    }

        int left= min(minEleidx,maxEleidx);
        int right= max(minEleidx,maxEleidx);

        return min({ left+1+n-right,right+1,n-left});

    }
};