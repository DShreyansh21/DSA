class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)return {-1,-1};
        vector<int> ans;
        int l=-1;
        int h=nums.size();
        while(h-l>1){
            int mid=(l+h)/2;
            if(nums[mid]>=target){
                h=mid;
            }
            else{
                l=mid;
            }
        }
        int left=h;
        if(left==-1||left==nums.size()||nums[left]!=target){
            return {-1,-1};
        }
        l=-1;
        h=nums.size();
        while(h-l>1){
            int mid=(l+h)/2;
            if(nums[mid]<=target){
                l=mid;
            }
            else{
                h=mid;
            }
        }
        int right=l;
        return {left,right};
    }
};