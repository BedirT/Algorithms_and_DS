# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        node_list = []
        node = head
        while node:
            node_list.append(node)
            node = node.next
        
        idx_l = 0
        idx_r = len(node_list) - 1
        
        node = node_list[idx_l]
        while idx_l < idx_r:
            node.next = node_list[idx_r]
            node = node.next
            idx_l += 1
            if idx_l == idx_r:
                break
            node.next = node_list[idx_l]
            node = node.next
            idx_r -= 1
        node.next = None
        return node_list[idx_l]
            