class Solution {
public:
    int maxSubArray(vector<int>& nums) {


        //Kadane’s Algorithm
        int b=0;
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int a=b+nums[i];
            b=max(a,nums[i]);
            ans=max(ans,b);
        }
        return ans;

        //O(n)
        // int max=INT_MIN;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     if(sum>max){
        //         max=sum;
        //     }
        //     if(sum<0){
        //         sum=0;
        //     }
        // }
        // return max;


        //O(n^2)  -->Time Limit Exceeded
 
        // int sum=0;
        // int max=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum>max){
        //             max=sum;
        //         }
        //     }
        // }
        // return max;
    }
};