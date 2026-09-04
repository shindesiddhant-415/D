class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int count=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto p:mp){
             count+=(p.second/2)*2;
        }
        if(count<s.size()) return count+1;
        else return count;
        
    }
};