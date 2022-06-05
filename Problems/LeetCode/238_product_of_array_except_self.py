class Solution:

    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # dynamic p
        left_mult = [1]
        right_mult = [1]
        for n, min_n in zip(nums, nums[::-1]):
            # left
            left_mult.append(left_mult[-1] * n)
            # right
            right_mult.append(right_mult[-1] * min_n)
        left_mult.append(1)
        right_mult.append(1)
        right_mult = list(reversed(right_mult))
        for i, _ in enumerate(nums):
            nums[i] = left_mult[i] * right_mult[i + 2]  # i-1 +1 i+1 +1
            # +1 due to appended 1's to cover right and left
        return nums
