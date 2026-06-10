class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int ones=0;
        for(int num:nums){
            ones +=num;

        }
        if(ones== 0||ones == 1)return 0;
        int curr =0;
        for(int i=0;i<ones;i++){
            curr +=nums[i];

        }
        int maxi =curr;
        for(int i=ones; i<n + ones;i++){
            curr +=nums[i%n];
            curr -=nums[(i - ones)%n];
            maxi=max(maxi,curr);
        }
        return ones - maxi;
    }
};