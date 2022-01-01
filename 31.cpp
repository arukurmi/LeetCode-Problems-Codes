// Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
// If such an arrangement is impossible, it must rearrange it to the lowest possible order (i.e., sorted in ascending order).
// The replacement must be in place and use only constant extra memory.


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int lastMin = n - 2;
        
        while(lastMin>=0 && nums[lastMin] >= nums[lastMin+1]){
            lastMin--;
        }
        
        if(lastMin < 0)
            reverse(nums.begin() , nums.end());
        
        else{
            int j = n-1;
            while(j>=0 && nums[j] <= nums[lastMin]){
                j--;
            }
            swap(nums[j] , nums [lastMin]);
            reverse(nums.begin() + lastMin + 1 , nums.end());
        }
        
        return;        
    }
};