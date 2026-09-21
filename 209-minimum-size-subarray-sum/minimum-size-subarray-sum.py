class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        min_len = float('inf')
        left = 0
        n = len(nums)
        currsum = 0
        
        for r in range(n):
            currsum += nums[r]
            
            while currsum >= target:
                min_len = min(min_len, r - left + 1)
                currsum -= nums[left]
                left += 1  # Move the left window pointer forward
                
        return 0 if min_len == float('inf') else min_len