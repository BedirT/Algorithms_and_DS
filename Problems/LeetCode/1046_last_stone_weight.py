import heapq

class Solution(object):
    def lastStoneWeight(self, stones):
        """
        :type stones: List[int]
        :rtype: int
        """
        stones = [-x for x in stones]
        heapq.heapify(stones)
        while len(stones) > 1:
            val1 = - heapq.heappop(stones)
            val2 = - heapq.heappop(stones)
            mx, mn = max(val1, val2), min(val1, val2)
            new_val = mx - mn
            if new_val:
                heapq.heappush(stones, -new_val)
        return -stones[0] if stones else 0
