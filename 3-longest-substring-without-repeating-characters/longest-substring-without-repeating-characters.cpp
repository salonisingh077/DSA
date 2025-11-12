class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      vector<int> lastIndex(256,-1);
      int maxlen =0;
      int start=0;
      for(int end=0;end<s.size();end++) {
        if(lastIndex[s[end]]>= start){
            start=lastIndex[s[end]]+1;

        }
        lastIndex[s[end]]=end;
        maxlen=max(maxlen,end-start+1);
      } 
      return maxlen;
    }
};