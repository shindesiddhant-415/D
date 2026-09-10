class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m=n/3;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto num:mp ){
            if(num.second>m) ans.push_back(num.first);
        }
        return ans;
    }
};