# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def calc(self, root):
        l_val, r_val = 0, 0
        tot_left, tot_right = 0, 0
        r_id, l_id = -1, -1
        if root.left:
            l_val, tot_left = self.calc(root.left)
        if root.right:
            r_val, tot_right = self.calc(root.right)
        tot_val = r_val + l_val + 1
        the_len = max(l_val, r_val)
        res = max(tot_right, tot_left, tot_val)
        # print([tot_right, r_id], [tot_left, l_id], [tot_val, root.val])
        return the_len + 1, res

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        res = self.calc(root)
        return res[1] - 1
