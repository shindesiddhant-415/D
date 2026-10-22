class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        while(true){
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
            if(slow==fast){
                int pos=0;
                while(pos!=slow){
                    pos=nums[pos];
                    slow=nums[slow];
                }
                return pos;
            }
        }
        return -1;
        
    }
};