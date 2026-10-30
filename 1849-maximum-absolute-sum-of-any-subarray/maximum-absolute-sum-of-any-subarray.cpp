class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int max_s=0;
        int min_s=0;
        for(int i=0;i<n;i++){
            int a=max_s+nums[i];
            int b=nums[i];
            int c=min_s+nums[i];
            max_s=max(a,b);
            min_s=min(c,b);
            ans=max(ans,max(abs(max_s),abs(min_s)));
        }
        return ans;
    }
};