# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:

    def mergeTwoLists(self, list1: Optional[ListNode],
                      list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1
        small_l = list1 if list1.val < list2.val else list2
        large_l = list1 if list1.val >= list2.val else list2
        while large_l:
            if not small_l.next:
                small_l.next = ListNode(large_l.val)
                large_l = large_l.next
                continue
            if large_l.val < small_l.next.val:
                # put the large_l item in the middle
                small_l.next = ListNode(large_l.val, small_l.next)
                large_l = large_l.next
                small_l = small_l.next
            else:
                small_l = small_l.next
        return list1 if list1.val < list2.val else list2
