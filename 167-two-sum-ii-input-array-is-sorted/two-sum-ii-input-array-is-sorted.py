class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        ans=[]
        left=0
        right=len(numbers)-1
        while(left<right):
            sum=numbers[left]+numbers[right]
            if sum==target:
                ans.append(left+1)
                ans.append(right+1)
                break
            elif sum>target:
                    right=right-1
            else:
                        left=left+1
        return ans
        