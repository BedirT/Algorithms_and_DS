# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def traverse(self, root, add_to_sr):
        if root is None:
            return "N"
        ans = str(root.val)
        ans += self.traverse(root.left, add_to_sr) if root.left else 'N'
        ans += self.traverse(root.right, add_to_sr) if root.right else 'N'
        if add_to_sr:
            self.all_subroots.add(ans)
        return ans

    def isSubtree(self, root, subRoot):
        """
        :type root: TreeNode
        :type subRoot: TreeNode
        :rtype: bool
        """
        self.all_subroots = set()
        self.traverse(root, True)
        return self.traverse(subRoot, False) in self.all_subroots
