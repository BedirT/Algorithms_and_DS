# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def traverse(self, root):
        if root is None:
            return "N"
        ans = str(root.val)
        ans += self.traverse(root.left) if root.left else 'N'
        ans += self.traverse(root.right) if root.right else 'N'
        return ans

    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        a = self.traverse(p)
        b = self.traverse(q)
        return a == b
