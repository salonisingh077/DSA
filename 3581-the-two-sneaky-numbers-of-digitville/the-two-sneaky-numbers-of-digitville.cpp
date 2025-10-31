class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(101,0);
        vector<int> result;
        for(int x:nums){
            count[x]++;
            if(count[x]==2){
                result.push_back(x);
            }
        }
        return result;
    }
};