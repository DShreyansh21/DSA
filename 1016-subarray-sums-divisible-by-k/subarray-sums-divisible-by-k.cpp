class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int curr_sum=0;
        int res=0;
        f[0]=1;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
           int rem = (curr_sum % k + k) % k;
           res+=f[rem];
           f[rem]++;
        }
        return res;
    }
};