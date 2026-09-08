class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        //O(n^2)
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[i]==nums[j] && i<j){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        //O(n)-->hash map
        int count=0;
        unordered_map<int,int>mp;
        for(auto n:nums){
            count+=mp[n];
            mp[n]++;
        }
        return count;
    }
};