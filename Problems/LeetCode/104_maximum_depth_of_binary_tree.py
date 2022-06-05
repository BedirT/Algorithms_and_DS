# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        l_d = 1  # left_depth
        r_d = 1  # right_depth
        if root.left:
            l_d = self.maxDepth(root.left) + 1
        if root.right:
            r_d = self.maxDepth(root.right) + 1
        return max(r_d, l_d)
