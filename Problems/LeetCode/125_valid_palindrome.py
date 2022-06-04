class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = ""
        for ch in s:
            if ch.isalnum():
                new_s += ch.lower()
        rev_s = ''.join(list(reversed(new_s)))
        if new_s == rev_s:
            return True
        return False