class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int end=-1;
        int start=0;
        int maxv=nums[0];
        int minv=nums[n-1];

        for(int i=n-2;i>=0;i--){  //string potion of substring
            if(nums[i]>minv){
                start=i;
            }else{
                minv=nums[i];
            }
        }

        for(int i=0;i<n;i++){   //end of the substring 
            if(nums[i]<maxv){
                end=i;
            }else{
                maxv=nums[i];
            }
        }

        if(end==-1) return 0;
        else return end-start+1;
    }
};