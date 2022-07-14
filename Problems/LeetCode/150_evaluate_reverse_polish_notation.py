class Solution:
    def __init__(self):
        self.stack = []
        self.operands = {
            '+': lambda x, y: int(x) + int(y),
            '-': lambda x, y: int(x) - int(y),
            '*': lambda x, y: int(x) * int(y),
            '/': self.div,}
        
    def div(self, x, y):
        res = int(x) / int(y) 
        if res >= 0 or int(res // 1) == int(res): 
            return int(res // 1)
        else:
            return int(res // 1) + 1
        
    def pop_op(self):
        opt = self.stack.pop()
        op0 = self.stack.pop()
        op1 = self.stack.pop()
        self.stack.append(self.operands[opt](op1, op0)) 
        
    def evalRPN(self, tokens: List[str]) -> int:
        for t in tokens:
            self.stack.append(t)
            if t in self.operands:
                self.pop_op()
        return self.stack[0]

# Alternate solution: (A little faster, but one above is more general)
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for t in tokens:
            if t == '+':
                stack.append(stack.pop() + stack.pop())
            elif t == '-':
                a, b = stack.pop(), stack.pop()
                stack.append(b - a)
            elif t == '*':
                stack.append(stack.pop() * stack.pop())
            elif t == '/':
                a, b = stack.pop(), stack.pop()
                stack.append(int(b / a))
            else:
                stack.append(int(t))
        return stack[0]

