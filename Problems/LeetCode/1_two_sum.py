class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        target_rem = {}
        for i, num in enumerate(nums):
            if target-num in target_rem:
                return [i, target_rem[target-num]]
            target_rem[num] = i
        return False