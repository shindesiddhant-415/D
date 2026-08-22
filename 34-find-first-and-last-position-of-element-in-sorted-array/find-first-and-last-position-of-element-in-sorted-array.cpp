class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int >ans;
        int s=0,e=nums.size()-1;
        int mid =(s+e)/2;
        int f=-1,l=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                f=mid;
                e=mid-1;
            }else if(nums[mid]>target) {
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        ans.push_back(f);
        e=nums.size()-1;
        s=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                l=mid;
                s=mid+1;
            }else if(nums[mid]<target) {
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        ans.push_back(l);
        return ans;
        
    }
};