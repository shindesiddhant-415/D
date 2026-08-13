class Solution {
public:
    string removeOuterParentheses(string s) {
        string re="";
        int de=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(de>0){
                    re+=s[i];
                }
                de++;

            }else{
                de--;
                if(de>0){
                    re+=s[i];
                }
                
            }
        }
        return re;
        
    }
};