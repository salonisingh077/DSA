class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
        int start=0,maxLength=1;
        for(int i=0;i<s.length();i++){
            int j=i;
            int len1=expand(s,i,j);
            j=i+1;
            int len2=expand(s,i,j);
            int len=max(len1,len2);
            if(len>maxLength){
                start=i-(len-1)/2;
                maxLength=len;
            }

        }
        return s.substr(start,maxLength);

    }
    int expand(const string &s,int i,int j){
        while(i>=0 &&j<s.length()&& s[i]==s[j]){
            i--;
            j++;
        }
        return j-i-1;
    }
    
    };
    
