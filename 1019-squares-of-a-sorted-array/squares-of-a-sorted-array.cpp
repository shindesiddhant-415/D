class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     int a=pow(abs(nums[i]),2);
        //     ans.push_back(a);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;


        //two-pointer

        vector<int>ans(nums.size());
        int l=0,r=nums.size()-1;
        int pos=nums.size()-1;

        while(l<=r){
            int rs=nums[r]*nums[r];
            int ls=nums[l]*nums[l];

            if(rs>ls){
                ans[pos]=rs;
                pos--;
                r--;
            }else{
                ans[pos]=ls;
                pos--;
                l++;
            }
        
        }

        return ans;
        
    }
};