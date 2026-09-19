class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxv=INT_MAX;
        int ans_sum=0;
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
            int diff=abs(sum-target);
            if(sum==target){
                maxv=diff;
                ans_sum=sum;
                left++;
                right--;
                return ans_sum;
            }else if(sum<target){
                left++;
                if(maxv>diff){
                    maxv=diff;
                    ans_sum=sum;
                }
                
            }else{
                right--;
                if(maxv>diff){
                    maxv=diff;
                    ans_sum=sum;
                }
            }
        }

        }
        return ans_sum;
    }
};