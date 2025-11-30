class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int windowSize =n-k;
        if(windowSize==0) return accumulate(cardPoints.begin(),cardPoints.end(),0);
        int totalSum=0;
        for(int x: cardPoints) totalSum+=x;
        int windowSum=0;
        int minWindowSum=INT_MAX;
        int left=0;
        for(int right =0;right<n; right++){
            windowSum +=cardPoints[right];
            if(right -left+1>windowSize){
                windowSum -=cardPoints[left];
                left++;

            }
            if(right -left +1== windowSize){
                minWindowSum =min(minWindowSum,windowSum);
            }
        }
        return totalSum-minWindowSum;
    }
};