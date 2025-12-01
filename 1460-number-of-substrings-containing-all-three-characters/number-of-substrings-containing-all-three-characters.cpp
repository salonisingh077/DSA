class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        long long ans=0;
        int lastA=-1, lastB=-1,lastC =-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a')lastA=i;
            else if(s[i]=='b')lastB=i;
            else if(s[i]=='c')lastC=i;
            int m=min(lastA,min(lastB,lastC));
            if(m!=-1) ans +=(m+1);

        } 
        return ans;
    }
};