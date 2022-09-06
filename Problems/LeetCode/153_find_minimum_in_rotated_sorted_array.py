class Solution:
    def findMin(self, nums: List[int]) -> int:
        l, r = 0, len(nums)-1
        mn = nums[0]
        while l <= r:
            m = (r + l) // 2
            if nums[m] >= nums[0]:
                # go right
                l = m + 1
            elif nums[m] < nums[0]:
                r = m - 1
                mn = min(nums[m], mn)
        m = ((r + l) // 2) % len(nums)
        mn = min(mn, nums[m])
        return mn
