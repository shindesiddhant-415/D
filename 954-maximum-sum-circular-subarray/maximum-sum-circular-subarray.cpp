class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int maxs=nums[0];
        int mins=nums[0];
        int sum=0;
        int cmax=0;
        int cmin=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int a=cmax+nums[i];
            int c=cmin+nums[i];
            int b=nums[i];
            cmax=max(a,b);
            maxs=max(maxs,cmax);

            cmin=min(b,c);
            mins=min(mins,cmin);
            
        }
        if(maxs<0){
                return maxs;
            }else{
                return max(maxs,sum-mins);
            }
    }
};