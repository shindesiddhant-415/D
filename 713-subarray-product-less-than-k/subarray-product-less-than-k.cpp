class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        if(k<=1) {
            return 0;
        }

        int n=nums.size();
        int count =0;
        int left = 0;
        int product = 1;
        for(int i=0;i<n;i++) {
            product *=nums[i];


            while(product>=k) {
                product /= nums[left];
                left++;
            }

            count+=(i - left + 1);
        }

        return count;

        




        //O(n^2) 
        // int count=0;
        // long long muli=1;
        // for(int i=0;i<nums.size();i++){
        //     muli=1;
        //     for(int j=i;j<nums.size();j++){
        //         muli*=nums[j];
        //         if(muli<k){
        //             count++;
        //         }else{
        //             break;
        //         }
        //     }
        // }
        // return count;
    }
};