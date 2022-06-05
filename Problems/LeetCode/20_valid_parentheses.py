class Solution:

    def isValid(self, s: str) -> bool:
        stack = []
        corr = {')': '(', '}': '{', ']': '['}
        for c in s:
            if c in '({[':
                stack.append(c)
            else:
                if not stack:
                    return False
                last = stack.pop()
                if last != corr[c]:
                    return False
        if not stack:
            return True
        return False
