class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string a="balloon";
        unordered_map<char,int>mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]=0;
        }
        for(int i=0;i<a.size();i++){
            for(int j=0;j<text.size();j++){
                if(a[i]==text[j]){
                    mp[a[i]]++;
                }
            }
        }
        int mini=INT_MAX;
        mp[a[2]]=mp[a[2]]/2;
        mp[a[3]]=mp[a[3]]/2;
        mp[a[4]]=mp[a[4]]/2;
        mp[a[5]]=mp[a[5]]/2;
        for(int i=0;i<a.size();i++){
            if(mp[a[i]]<mini) mini=mp[a[i]];
        }
        return mini;
        
    }
};