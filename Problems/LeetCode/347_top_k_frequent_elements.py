class Solution:

    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        rank = [
        ]  # for each number we have a list of ints occuring that many time
        counter = {}
        for num in nums:
            if num in counter:
                counter[num] += 1
            else:
                counter[num] = 1

            if len(rank) <= counter[num]:
                rank.append([num])
            else:
                rank[counter[num]].append(num)

        res = set()
        for e in rank[::-1]:
            for x in e:
                res.add(x)
                if len(res) == k:
                    return list(res)

        return False
