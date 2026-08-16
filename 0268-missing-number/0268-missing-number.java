class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;   // use .length in Java
        int xorAll = 0, xorNums = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= n; i++) {
            xorAll ^= i;
        }

        // XOR all elements in the array
        for (int num : nums) {
            xorNums ^= num;
        }

        // Missing number is the XOR of these two
        return xorAll ^ xorNums;
    }
}
