class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;//-->(1000000007) Prevents number overflow for large inputs
        int n=arr.size();
        int sum=0;
        int ans=0;
        int ec=1;// 1 because prefix sum starts at 0 (even)
        int oc=0;// 0 odd prefix sums seen so far
        for(int i=0;i<n;i++){
            sum+=arr[i];

            int p=sum%2;
            if(p<0) p+=2;
            if(p!=0){
                ans=(ans+ec)%MOD;
                oc++;
            }else{
                ans=(ans+oc)%MOD;
                ec++;
            }
            
                
        }
        return ans;



        // int ans=0;
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         if(sum%2!=0) ans++;
        //     }
            
        // }
        // return ans;
        
    }
};