class Solution {
public:
    int maxProfit(vector<int>& prices) {
            
            int c=prices[0];
            int n=prices.size();
            int a=0,max=0;
            for(int i=1;i<n;i++){
                a=prices[i]-c;
                if(a>max){
                    max=a;
                }
                c=min(c,prices[i]);
            }
            return max;



           // O(n^2) -->Time Limit Exceeded
           
        //     for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         a=prices[j]-prices[i];
        //         if(a>max){
        //             max=a;
        //         }
        //     }
        // }
        // return max;

    }
};