class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        //
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int st1=0,en1=0,st2=0,en2=0;
        st1=intervals[0][0];
        en1=intervals[0][1];
        if(intervals.size()==1){ return intervals;}
        if(intervals.empty()) return {};
        for(int i=1;i<intervals.size();i++){
            st2=intervals[i][0];
            en2=intervals[i][1];
           
            if(en1>=st2){
                
                en1=max(en1,en2);
                
            }else{
                ans.push_back({st1, en1});
                st1=intervals[i][0];
                en1=intervals[i][1];
            }
        }
        ans.push_back({st1, en1});
        return ans;
    }

        // //
        // sort(intervals.begin(),intervals.end());
        // vector<vector<int>>ans;
        // ans.push_back(intervals[0]);
        // for(int i=1;i<intervals.size();i++){
            
        //         if(intervals[i][0]<=ans.back()[1]){  //ans.back() --helps to get previous element put in the ans 
        //             ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        //         }else{
        //             ans.push_back(intervals[i]);
        //         }
            
        // }
        // return ans;
    // }
};