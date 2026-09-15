class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' ){
                if(!a.empty()){
                    a.pop_back();
                }
                
            }else{
                a.push_back(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' ){
                if(!b.empty()){
                    b.pop_back();
                }
                
            }else{
                b.push_back(t[i]);
            }
        }

        if(a.size()==b.size()){
            for(int i=0;i<a.size();i++){
                if(a[i]!=b[i]) return false;
            }
            return true;
        }else{
            return false;
            } 
        
          
        }
};