class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        ans = max(nums)
        maks, mins = 1, 1
        
        for i in nums:
            swap = maks
            maks = max(i, i * maks, i * mins)
            mins = min(i, i * swap, i * mins)
            ans = max(maks, ans)
        return ans
        
