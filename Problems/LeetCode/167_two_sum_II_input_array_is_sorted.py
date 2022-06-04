class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        hash_t = {}
        for i, n in enumerate(numbers):
            if target-n in hash_t:
                return [hash_t[target-n], i + 1]
            hash_t[n] = i + 1
        return False