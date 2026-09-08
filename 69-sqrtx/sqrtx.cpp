class Solution {
public:
    int mySqrt(int x) {
        
        // return sqrt(x);

        //O(logn)
        if (x == 0 || x == 1) return x; 
        int l=0,h=x;
        long long mid;
        int ans;
        while(l<=h){
            mid=l+(h-l)/2;
            long long s=mid*mid;
            if(s==x){
            return mid;
            }else if(s<x){
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return ans;
    }
};