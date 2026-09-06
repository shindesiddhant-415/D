class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r=0,l=numbers.size()-1;
        vector<int>ans;
        while(r<l){
            if(numbers[r]+numbers[l]>target){
                 l--;
                 }
            else if (numbers[r]+numbers[l]<target) {
                r++;
                }
            else if (numbers[r]+numbers[l]==target){ 

                ans.push_back(r+1);
                ans.push_back(l+1);
                return ans;
            }
        }
        return ans;
        
    }
};