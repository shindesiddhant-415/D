class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int arr[2]={0};
        int low=0,high=0;
        int res=INT_MIN;


        for(int high=0;high<n;high++){
            if(nums[high]==0) 
                arr[0]++;
            else if(nums[high]==1)
                arr[1]++;
            

            int len=high-low+1;
            int maxel=arr[1];
            int diff=len-maxel;

            while(diff>k){
                arr[nums[low]]--;
                low++;
                len=high-low+1;
                maxel=arr[1];
                diff=len-maxel;
            }

            if(diff<=k){
                len=high-low+1;
                res=max(len,res);

            }

        }
        return res;
    }
};