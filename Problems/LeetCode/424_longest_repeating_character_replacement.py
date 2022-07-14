from collections import defaultdict
class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        sz = 0
        mx = 0
        h_map = defaultdict(lambda: 0)
        for i, c in enumerate(s):
            h_map[c] += 1
            sz += 1
            mx = max(mx, h_map[c])
            if sz > k + mx:
                h_map[s[i + 1 - sz]] -= 1
                sz -= 1
        return sz
