class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int n=tickets.size();
       int ans=0;
       int t=tickets[k];
       for(int i=0;i<n;i++){
        if(i<=k){
            ans +=min(tickets[i],t);

        }else{
            ans+=min(tickets[i],t-1);

        }
       }
       return ans; 
    }
};