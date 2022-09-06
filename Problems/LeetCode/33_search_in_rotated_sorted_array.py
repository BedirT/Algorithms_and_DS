class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # get min value and index
        mn_value = min(nums)
        first_element = nums[0]
        mn_idx = 0
        if mn_value != first_element:
            # rotated
            l, r = 0, len(nums)-1
            while l <= r:
                m = (r + l) // 2
                if nums[m] == mn_value:
                    mn_idx = m
                    break
                if nums[m] >= first_element:
                    l = m + 1
                elif nums[m] < first_element:
                    r = m - 1
        # just do normal binary search now with update idx
        nums = nums[mn_idx:] + nums[:mn_idx]
        l, r = 0, len(nums)-1
        while l <= r:
            m = (r + l) // 2
            if nums[m] == target:
                return (m - (len(nums) - mn_idx)) % len(nums) 
            elif nums[m] > target:
                r = m - 1
            else:
                l = m + 1
        return -1
