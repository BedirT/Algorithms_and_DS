# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        node = head
        last_node = ListNode(node.val, None)
        while node.next:
            node = node.next
            last_node = ListNode(node.val, last_node)
        return last_node
