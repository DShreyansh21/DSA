class Solution:
    def totalFruit(self, fruits: list[int]) -> int:
        ans=0
        left=0
        f={}
        if len(fruits)==1:
            return 1
        for right in range(len(fruits)):
            f[fruits[right]]=f.get(fruits[right],0)+1
            while len(f)>2:
                f[fruits[left]]-=1
                if f[fruits[left]]==0:
                    del f[fruits[left]]
                left+=1
            if len(f)<=2:
                ans=max(ans,right-left+1)
        return ans