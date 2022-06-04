END_IDX = 1
BEG_IDX = 0
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seq_hash = {}
        mx_dist = 0
        for num in nums:
            if num in seq_hash:
                continue
            top_num = num
            low_num = num
            if num+1 in seq_hash:
                top_num = seq_hash[num+1][END_IDX]
            if num-1 in seq_hash:
                low_num = seq_hash[num-1][BEG_IDX]
            seq_hash[num] = [low_num, top_num]
            # update the end points
            seq_hash[low_num][END_IDX] = top_num
            seq_hash[top_num][BEG_IDX] = low_num
            mx_dist = max(mx_dist, top_num - low_num + 1)
        return mx_dist
