# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def isBalanced(self, root: Optional[TreeNode]) -> bool:

        def get_height(root):
            if not root:
                return True, 0
            l, r = get_height(root.left), get_height(root.right)
            balanced = l[0] and r[0] and abs(l[1] - r[1]) <= 1
            return balanced, max(l[1], r[1]) + 1

        return get_height(root)[0]
