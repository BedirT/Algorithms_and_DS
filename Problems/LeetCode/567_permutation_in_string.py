from collections import defaultdict
from copy import deepcopy

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1):
            return False
        ct = defaultdict(int)
        for s in s1:
            ct[s] += 1
        l, r = 0, len(s1)-1
        for i in range(r + 1):
            if s2[i] in ct:
                ct[s2[i]] -= 1
        while r+1 < len(s2):
            if max(ct.values()) == 0 and min(ct.values()) == 0:
                return True
            r += 1
            l += 1
            if s2[r] in ct:
                ct[s2[r]] -= 1
            if s2[l-1] in ct:
                ct[s2[l-1]] += 1
        if max(ct.values()) == 0 and min(ct.values()) == 0:
            return True
        return False
