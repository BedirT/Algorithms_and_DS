import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
            
        def consume(num):
            hours = 0
            for pile in piles:
                hours += math.ceil(pile/num)
            return hours
        
        l, r = 1, max(piles)
        best_k = 10**10
        while l <= r:
            k = (r + l) // 2
            consumption_time = consume(k)
            if consumption_time > h:
                l = k + 1
            else:
                r = k - 1
                if best_k > k:
                    best_k = k
        return best_k
