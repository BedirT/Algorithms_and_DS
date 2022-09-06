class TimeMap:

    def __init__(self):
        self.time_map = {} # typing.Dict[str, typing.List[typing.Tuple[int, String]]]  

    def set(self, key: str, value: str, timestamp: int) -> None:
        data = (timestamp, value)
        if key not in self.time_map:
            self.time_map[key] = [data]
        else:
            self.time_map[key].append(data)
    
    @staticmethod
    def search(data, timestamp: int, value: str) -> int:
        # returns the index for timestamp
        l, r = 0, len(data) - 1
        while l <= r:
            m = (l + r) // 2
            if data[m][0] == timestamp:
                return m
            elif data[m][0] > timestamp:
                # go left
                r = m - 1
            else:
                l = m + 1
        return (l + r) // 2

    def get(self, key: str, timestamp: int) -> str:
        if key not in self.time_map:
            return ""
        data = self.time_map[key]
        idx = self.search(data, timestamp, key)
        if timestamp < data[idx][0]:
            return ""
        return data[idx][1]


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)