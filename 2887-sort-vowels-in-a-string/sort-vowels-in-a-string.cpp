class Solution {
public:
    string sortVowels(string s) {
        auto isVowel =[](char c){
            c = tolower(c);
            return c=='a'|| c=='e'||c=='i'||c=='o'||c=='u';
        };
        vector<char> vowels;
        for(char c:s){
            if(isVowel(c)) vowels.push_back(c);

        }
        sort(vowels.begin(), vowels.end());
        int idx=0;
        for(char &c:s){
            if(isVowel(c)){
                c=vowels[idx++];
            }
        }
        return s;
    }
};