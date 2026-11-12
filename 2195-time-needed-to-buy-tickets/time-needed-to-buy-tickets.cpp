class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);
        }
        int time=0;
        while(!q.empty()){
            time++;
            int c=q.front();
            q.pop();

            tickets[c]--;

            if(c==k &&tickets[c]==0){
                return time;
            }

            if(tickets[c]>0){
                q.push(c);
            }
        }
        return time;
    }
};