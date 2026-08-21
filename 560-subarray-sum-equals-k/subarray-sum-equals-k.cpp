class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        //O(n)  

        unordered_map<int,int>mpp;
        mpp[0]=1;
        int presum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int rm=presum-k;
            cnt+=mpp[rm];
            mpp[presum]+=1;

        }
        return cnt;


        //O(n^2)

        // int m=INT_MIN;    
        // int sum=0,count=0;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        // for(int j=i;j<nums.size();j++){
        //     sum+=nums[j];
        //     if(sum==k){
        //         count++; 
        //     }
        // }
        // }
        // return count;
        
    }
};