class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            int lsum=0;
            if(i==0){
                lsum=0;
            }else{
                lsum=nums[i-1];
            }
            int rsum=nums[n-1]-nums[i];
            
            if(lsum==rsum) return i;
        }
        return -1;
        
    }
};