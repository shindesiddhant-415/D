class Solution {
public:

    int fun(int x){
            int sum=0;
            while(x>0){
                int d=x%10;
                x=x/10;
                sum+=d*d;
            }
            return sum;
        }

    bool isHappy(int n) {
        
        // fast and slow pointer
        
        if(n==1) return true;
        
        int slow=n;
        int fast=n;

        while(fast!=1){
            slow=fun(slow);
            fast=fun(fast);
            fast=fun(fast);

            if(slow==fast && slow!=1){
                return false;
            }
        }
        return true;


        // while(n>9){
        //     int sum=0;
        //     while(n>0){
        //     int d=n%10;
        //     sum+=d*d;
        //     n/=10;
        //     }
        //      n=sum;
        // }
        // return (n == 1 || n == 7);
    }
};