class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=1;
        int cnt=1;

        if(nums.size()==0) return 0;
        else{
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
                if(nums[i]+1==nums[i+1]){
                    cnt++;
                    if(cnt>maxi){
                        maxi=cnt;
                    }
                }else{
                    cnt=1;
                }
        }
        }
        return maxi;
        
    }
};