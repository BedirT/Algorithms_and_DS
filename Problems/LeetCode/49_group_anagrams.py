class Solution:

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams = {}
        for s in strs:
            ordered_s = str(sorted(s))
            if ordered_s in anagrams:
                anagrams[ordered_s].append(s)
            else:
                anagrams[ordered_s] = [s]
        return list(anagrams.values())
