class Solution {
public:

    int getdigitsum( int num){
        int sum=0;
        while(num>0){
            sum+= num%10;
            num /=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n= nums.size();

        vector<int>aftersorted(nums);
        

        auto lambda=[this](int num1,int num2){
            int digti1sum= getdigitsum(num1);
            int digti2sum= getdigitsum(num2);

            if(digti1sum !=digti2sum){
                return digti1sum < digti2sum;

            }
            return num1< num2;

        };

        sort(begin(aftersorted),end(aftersorted),lambda);
        unordered_map<int,int>valToIdx;
        for( int i=0;i<n;i++){
            valToIdx[nums[i]]=i;
        }

        int swapcount=0;

        for( int i=0;i<n;i++){
            int expectedValue=aftersorted[i];
            int currentValue=nums[i];

            if(expectedValue == currentValue) continue;

            int idx=valToIdx[expectedValue];

            nums[i]=expectedValue;
            nums[idx]=currentValue;

            valToIdx[expectedValue]=i;
            valToIdx[currentValue]=idx;

            swapcount++;

        }

    return swapcount;
    }
};