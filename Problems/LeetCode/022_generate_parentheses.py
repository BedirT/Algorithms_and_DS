from itertools import combinations
import time
class Solution:
    def isValid(self, s):
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if not stack:
                    return False
                stack.pop()
        if stack: # should never execute
            return False
        return True
        
    def generateParenthesis(self, n: int) -> List[str]:
        positions = combinations(range(2*n), n)
        res = set()
        for p in positions:
            check = ""
            for i in range(2*n):
                check += '(' if i in p else ')'
            if check not in res and self.isValid(check):
                res.add(check)
        return res
