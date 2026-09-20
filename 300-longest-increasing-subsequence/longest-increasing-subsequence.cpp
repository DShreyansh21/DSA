class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[j]+1,dp[i]);
                }

            }
            
        }
        int max=1;
        for(int i=0;i<dp.size();i++){
            if(dp[i]>max){
                max=dp[i];
            }
        }
        return max;
    }
};