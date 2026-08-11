class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int n=nums.size();
        // int arr1[n/2];
        // int arr2[n/2];
        // int p=0,ne=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         arr1[p]=nums[i];
        //         p++;
        //     }else{
        //         arr2[ne]=nums[i];
        //         ne++;
        //     }
        // }

        // p=0;
        // ne=0;
        
        // for(int i=0;i<n;i++){
        //     if(i%2==0){
        //         nums[i]=arr1[p];
        //         p++;
        //     }else{
        //         nums[i]=arr2[ne];
        //         ne++;
        //     }
        // }
        // return nums;



        int n=nums.size();
        vector<int>ans(n);
        int e=0,ne=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[e]=nums[i];
                e+=2;
            }else{
                ans[ne]=nums[i];
                ne+=2;
            }
        }
        return ans;
    }
};