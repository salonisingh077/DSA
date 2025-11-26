class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
      long long sum=0;
      long long F=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        sum+=nums[i];
        F+=(long long )i *nums[i];
      } 
      long long ans=F;
      for(int k=1;k<n;k++){
        F=F+ sum-1LL *n*nums[n-k];
        ans=max(ans,F);
      }
      return ans;
    }
};