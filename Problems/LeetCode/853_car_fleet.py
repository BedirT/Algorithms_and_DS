import math

class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        fleet = 0
        last_timing = 0. # how long it takes to reach the end
        for pos, s in sorted(zip(position, speed), reverse=True):
            cur_timing = (target-pos) / s
            if last_timing < cur_timing:
                last_timing = cur_timing
                fleet += 1
        return fleet                
