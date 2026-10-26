class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int ans=0,d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
                d++;
                ans=max(ans,d);
            }else if(s[i]==')'){
                st.pop();
                d--;
                
            }
        }
        return ans;
        
    }
};