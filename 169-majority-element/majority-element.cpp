class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //O(nlog n) +O(n)

        // map<int,int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        
        // for(auto it : mpp){
        //     if(it.second > nums.size()/2){
        //         return it.first;
        //     }
        // }
        // return -1;


        //O(n)

        int c=0;
        int e=0;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c=1;
                e=nums[i];
            }else if(nums[i]==e){
                c++;
            }else{
                c--;
            }

        }
            int c1=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==e){
                    c1++;
                }
            }
            if(c1>nums.size()/2){
                return e;
            }

           
         return -1;
    }
    
    
};