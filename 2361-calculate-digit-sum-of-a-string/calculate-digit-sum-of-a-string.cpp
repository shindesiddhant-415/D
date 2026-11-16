class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k ){
            string ans="";

            for(int i=0;i<s.length();i+=k){
                int sum=0;
                int e=min((int)s.length(),i+k);

                for(int j=i;j<e;j++){
                    sum+=s[j]-'0';
                }   
                ans+=to_string(sum);
            }
            s=ans;

        }
        return s;
        
    }
};