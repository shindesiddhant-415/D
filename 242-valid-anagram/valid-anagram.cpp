class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
        unordered_map<char,int>m;
        // unorder_map<char,int>m2;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m[t[i]]--;
        }
        for(int i=0;i<t.size();i++){
            if(m[s[i]]!=0) return false;
        }
        return true;
        
    }
};