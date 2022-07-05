class Solution:

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums = sorted(nums)
        res = []
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            target = -nums[i]
            # two pointer - r / l
            r = len(nums) - 1
            l = i + 1
            while r > l:
                if target == nums[r] + nums[l]:
                    res.append([nums[i], nums[r], nums[l]])
                    old_l = nums[l]
                    while old_l == nums[l]:
                        l += 1
                        if l >= r:
                            break
                elif target > nums[r] + nums[l]:
                    l += 1
                elif target < nums[r] + nums[l]:
                    r -= 1
        return res
