class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0;
        int high=n-1;
        int ans=0;
        while(low<high){
            int area=(high-low)*(min(height[low],height[high]));
            ans=max(ans,area);
            if(height[low]<height[high]){
                low++;
            }else{
                high--;
            }
        }
        return ans;
    }
};