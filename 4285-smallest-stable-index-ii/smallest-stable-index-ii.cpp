class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();
        vector<int>maxi1(n);
        vector<int>mini1(n);

        maxi1[0]=nums[0];
        for(int i=1;i<n;i++){
            maxi1[i]=max(maxi1[i-1],nums[i]);
        }

        mini1[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            mini1[i]=min(mini1[i+1],nums[i]);
        }

        for(int i=0;i<n;i++){
            if(maxi1[i]-mini1[i] <= k) return i;
        }
        return -1;

        //O(n^2)--> time limit exceeded
        // for(int i=0;i<nums.size();i++){
        //     int maxi1=*max_element(nums.begin(),nums.begin()+1+i);
        //     int mini1=*min_element(nums.begin()+i,nums.end());

        //     if(maxi1-mini1 <=k) return i;
        // }
        // return -1;
        
    }
};