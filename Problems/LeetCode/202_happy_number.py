class Solution:

    def __init__(self):
        self.memoize = set()

    def isHappy(self, n: int) -> bool:
        self.memoize.add(n)
        l = list(filter(lambda a: a != '0', str(n)))
        new_n = sum([int(c)**2 for c in l])
        if new_n == 1:
            return True
        elif new_n in self.memoize:
            return False
        return self.isHappy(new_n)
