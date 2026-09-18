class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        ans=[]
        n=len(nums)
        for i in range(n):
            
            ans.append(nums[i]*nums[i])
        ans.sort()
        return ans
        