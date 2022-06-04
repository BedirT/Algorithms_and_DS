class MinStack:

    def __init__(self):
        self.min_order = []
        self.stack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if not self.min_order:
            self.min_order = [val]
        else:
            self.min_order.append(min(val, self.min_order[-1]))

    def pop(self) -> None:
        self.stack.pop()
        self.min_order.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.min_order[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()