class Solution:

    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        counter = {}
        for ch0, ch1 in zip(s, t):
            if ch0 not in counter:
                counter[ch0] = 1
            else:
                counter[ch0] += 1
                if counter[ch0] == 0:
                    del counter[ch0]
            if ch1 not in counter:
                counter[ch1] = -1
            else:
                counter[ch1] -= 1
                if counter[ch1] == 0:
                    del counter[ch1]
        if len(counter) != 0:
            return False
        return True
