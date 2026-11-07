class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
     intervals.push_back(newInterval);
     sort(intervals.begin(),intervals.end());
     if(intervals.empty()) return {};
     int st1=0,st2=0,en1=0,en2=0;
     vector<vector<int>>ans;
     st1=intervals[0][0];
     en1=intervals[0][1];
     for(int i=1;i<intervals.size();i++){
        st2=intervals[i][0];
        en2=intervals[i][1];
        if(en1>=st2){
            en1=max(en1,en2);//for avoiding the dublicate we are not adding it to ans
        }else{
            ans.push_back({st1,en1});
            st1=intervals[i][0];
            en1=intervals[i][1];
        }
        
     }
     ans.push_back({st1,en1});
     return ans;   
    }
};