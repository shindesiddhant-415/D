class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int ans=arr[0];
        int no_d=arr[0];
        int one_d=0;
        for(int i=1;i<arr.size();i++){
            one_d=max(no_d,one_d+arr[i]);
            no_d=max(arr[i],no_d+arr[i]);   
            ans=max(ans,max(no_d,one_d));
        }
        return ans;


    }
};