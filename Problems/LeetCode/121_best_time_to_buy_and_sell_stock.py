class Solution:

    def maxProfit(self, prices: List[int]) -> int:
        my_min = 1e9
        mins = []
        for x in prices:
            if x < my_min:
                my_min = x
            mins.append(my_min)
        profit = 0
        for i, x in enumerate(mins):
            if prices[i] - x > profit:
                profit = prices[i] - x
        return profit
