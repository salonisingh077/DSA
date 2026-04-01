class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       vector<int> temp;
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
       }
       int zeros=n-temp.size();
       for(int i=0;i<zeros;i++){
        temp.push_back(0);
       }
       nums=temp;
    }
};