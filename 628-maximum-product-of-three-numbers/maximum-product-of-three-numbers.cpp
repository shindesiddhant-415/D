class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int emul=nums[n-1]*nums[n-2]*nums[n-3];
        int smul=nums[0]*nums[1]*nums[n-1];   //for -ve no 
        return max(smul,emul);
        
    }
};