class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        vector<int> result;
        set<int>s1;
        set<int>s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }

        for(auto it : s1){
            mp1[it]=1;
        }
        
        for(auto it : s2){
            mp2[it]=1;
        }
        for(auto it : s2){
            if(mp1.find(it)!=mp1.end()){
                result.push_back(it);
                
            }
        }
         return result;
        

        // vector<int>ans;
        // if(nums1.size())
        // for(int i=0;i<s1.size();i++){
        //     for(int j=0;i<s2.size();j++){
        //         if(s1.find(i)!=s1.end()&& s2.find(i)!=s2.end()) ans.push_back(i);
        //     }
        // }
        // return ans;
       
    }
};