class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int cnt[2]={0,0};
      for(int pref :students){
        cnt[pref]++;
      } 
      int n=sandwiches.size();
      for(int i=0;i<n;i++) {
        int sand= sandwiches[i];
        if(cnt[sand]==0){
            return n -i;

        }
        cnt[sand]--;
      }
      return 0;
    }
};