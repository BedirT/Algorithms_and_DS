class Solution:

    def plusOne(self, digits: List[int]) -> List[int]:
        # easy pthon str solution
        # s = ''.join(map(str, digits))
        # s = int(s) + 1
        # return [int(c) for c in str(s)]

        for idx, digit in enumerate(digits[::-1]):
            if digits[len(digits) - idx - 1] != 9:
                digits[len(digits) - idx - 1] += 1
                break
            digits[len(digits) - idx - 1] = 0
        if digits[0] == 0:
            digits = [1] + digits
        return digits
