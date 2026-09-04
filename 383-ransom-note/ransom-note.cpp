class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int >mp1;
        unordered_map<char,int>mp2;

        for(auto t:ransomNote) mp1[t]++;

        for(auto r:magazine) mp2[r]++;

        for(auto a:mp1){
            if(a.second>mp2[a.first]) return false;
        }
        return true; //all ch are in 2nd string
        
    }
};