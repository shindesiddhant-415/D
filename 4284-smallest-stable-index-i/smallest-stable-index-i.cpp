class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        //O(n^2)
        for(int i=0;i<nums.size();i++){
            int max1=*max_element(nums.begin(),nums.begin()+i+1);
            int min1=*min_element(nums.begin()+i,nums.end());
            if(max1-min1 <=k) return i;  // we have return the index where it is sable 
        }
        return -1;
    

        //O(n)
    
        // int n = nums.size();
        // vector<int> prefixMax(n), suffixMin(n);

        // prefixMax[0] = nums[0];
        // for(int i = 1; i < n; i++)
        //     prefixMax[i] = max(prefixMax[i-1], nums[i]);

        // suffixMin[n-1] = nums[n-1];
        // for(int i = n-2; i >= 0; i--)
        //     suffixMin[i] = min(suffixMin[i+1], nums[i]);

        // for(int i = 0; i < n; i++) {
        //     if(prefixMax[i] - suffixMin[i] <= k) return i;
        // }
        // return -1;
    
    }

};