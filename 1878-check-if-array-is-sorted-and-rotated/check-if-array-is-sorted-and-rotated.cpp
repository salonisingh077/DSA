class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return true;
        int drops =0;

        for(int i=0;i<n; i++){
            int next=(i+1)%n;
        
        if(nums[i]>nums[next])
        drops++;
        if(drops>1) return false;
    }
    return true;
    }
};