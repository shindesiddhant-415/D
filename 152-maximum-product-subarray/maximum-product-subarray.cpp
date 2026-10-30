class Solution {
public:
    int maxProduct(vector<int>& nums) {

        //Kadane’s Algorithm
        int n=nums.size();
        int max_e=1;
        int min_e=1;
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=max_e*nums[i];
            int c=min_e*nums[i];
            max_e=max(a,max(b,c));
            min_e=min(a,min(b,c));
            ans=max(ans,max(max_e,min_e));
        }
        return ans;
        
        
    }
};