# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution(object):

    def find(self, root, target):
        parents = [root]
        if root.val != target:
            parents.extend(
                self.find(root.left if root.val > target else root.right,
                          target))
        return parents

    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        target1, target2 = min(p.val, q.val), max(p.val, q.val)
        path1 = self.find(root, target1)
        path2 = self.find(root, target2)
        res = None
        for p1, p2 in zip(path1, path2):
            if p1.val != p2.val:
                break
            res = p1
        return res
