class Solution:

    def reverseBits(self, n: int) -> int:
        s = bin(n)[:1:-1]
        return int(s + '0' * (32 - len(s)), 2)
        # ! add bitwise solution
