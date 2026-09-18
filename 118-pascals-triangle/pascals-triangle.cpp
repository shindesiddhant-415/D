class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> ans;
        // for(int i=0;i<numRows;i++){
        //     vector<int> row(i + 1, 1);
        //     for(int j=1;j<i;j++){
        //          row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
        //     }
        //     ans.push_back(row);
        // }
        // return ans;


        vector<vector<int>>ans;
        ans.push_back({1});
        for(int i=1;i<numRows;i++)
        {
            vector<int>temp;
            temp.push_back(1);
            for(int j=1;j<=ans[i-1].size()-1;j++)
            {
                temp.push_back(ans[i-1][j]+ans[i-1][j-1]);
                cout<<ans[i-1][j]+ans[i-1][j-1]<<endl;
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};