class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ans=0
        left=0
        f={}
        for right in range(len(s)):
            f[s[right]]=f.get(s[right],0)+1
            while(f[s[right]])>1:
                
                f[s[left]]-=1
                if f[s[left]]==0:
                    del f[s[left]]
                left+=1
            ans=max(ans,right-left+1)
        return ans
