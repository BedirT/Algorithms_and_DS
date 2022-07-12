class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = set()
        l, mx = 0, 0
        for i, c in enumerate(s):
            if c in seen:
                while s[l] != c:
                    seen.remove(s[l])
                    l += 1
                l += 1
            else:
                seen.add(c)
            mx = max(mx, i - l + 1)
        return mx
