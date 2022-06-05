class Solution:

    def containsDuplicate(self, nums: List[int]) -> bool:
        memoize = {}
        for num in nums:
            if num in memoize:
                return True
            memoize[num] = 1
        return False
