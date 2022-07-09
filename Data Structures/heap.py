"""Binary Heap implementation. (Both min and max heaps)"""


class Heap:

    def __init__(self, type='max', arr=None):
        self.type = type  # 'max' or 'min'
        self.arr = arr if arr else []
        self.heapify()

    def _sift_up(self, idx):
        if idx == 0:
            return
        parent_idx = (idx - 1) // 2
        if self.type == 'max':
            if self.arr[idx] > self.arr[parent_idx]:
                self.arr[idx], self.arr[parent_idx] = self.arr[
                    parent_idx], self.arr[idx]
                self._sift_up(parent_idx)
        elif self.type == 'min':
            if self.arr[idx] < self.arr[parent_idx]:
                self.arr[idx], self.arr[parent_idx] = self.arr[
                    parent_idx], self.arr[idx]
                self._sift_up(parent_idx)

    def _sift_down(self, idx):
        if idx == len(self.arr) - 1:
            return
        left_idx = 2 * idx + 1
        right_idx = 2 * idx + 2
        if self.type == 'max':
            if left_idx < len(self.arr) and self.arr[left_idx] > self.arr[idx]:
                largest_idx = left_idx
            else:
                largest_idx = idx
            if right_idx < len(
                    self.arr) and self.arr[right_idx] > self.arr[largest_idx]:
                largest_idx = right_idx
            if largest_idx != idx:
                self.arr[idx], self.arr[largest_idx] = self.arr[
                    largest_idx], self.arr[idx]
                self._sift_down(largest_idx)
        elif self.type == 'min':
            if left_idx < len(self.arr) and self.arr[left_idx] < self.arr[idx]:
                smallest_idx = left_idx
            else:
                smallest_idx = idx
            if right_idx < len(
                    self.arr) and self.arr[right_idx] < self.arr[smallest_idx]:
                smallest_idx = right_idx
            if smallest_idx != idx:
                self.arr[idx], self.arr[smallest_idx] = self.arr[
                    smallest_idx], self.arr[idx]
                self._sift_down(smallest_idx)

    def heapify(self):
        for i in range(len(self.arr) // 2, -1, -1):
            self._sift_down(i)

    def insert(self, val):
        self.arr.append(val)
        self._sift_down(len(self.arr) - 1)

    def peek(self):
        """
        Returns the root element of the heap.
        """
        if len(self.arr) == 0:
            return None
        return self.arr[0]

    def pop(self):
        """
        Removes and returns the root element of the heap.
        """
        root = self.arr.pop()
        if len(self.arr) != 0:
            ret_item = self.arr[0]
            self.arr[0] = root
            self._sift_up(0)
            return ret_item
        return root

    def search(self, val):
        """
        Returns the index of the first occurrence of val in the heap.
        """
        for i in range(len(self.arr)):
            if self.arr[i] == val:
                return i
        return -1

    def delete_idx(self, idx):
        """
        Removes the element at idx.
        """
        if idx >= len(self.arr):
            return
        self.arr[idx] = self.arr[-1]
        self.arr.pop()
        self._sift_down(idx)
        self._sift_up(idx)

    def delete_val(self, val):
        """
        Removes the first occurrence of val in the heap.
        """
        idx = self.search(val)
        if idx == -1:
            return
        self.delete_idx(idx)

    def __str__(self):
        return str(self.arr)

    def __len__(self):
        return len(self.arr)

    def __getitem__(self, idx):
        return self.arr[idx]


if __name__ == '__main__':
    """ Speed Test. Comparing the performance of the custom heap with the built-in"""
    import time
    import random
    import heapq

    def test_heap(heap_type='max', appnd_list=[]):
        heap = Heap(heap_type)
        for i in range(len(appnd_list)):
            heap.insert(appnd_list[i])
        for i in range(len(appnd_list)):
            heap.pop()
        return heap

    def test_heapq_max(appnd_list=[]):
        # max heap with heapq
        heap = []
        for i in range(len(appnd_list)):
            heapq.heappush(heap, appnd_list[i])
        for i in range(len(appnd_list)):
            heapq.heappop(heap)
        return heap

    test_list = [random.randint(0, 100) for i in range(100000)]

    start = time.time()
    test_heap('max', test_list)
    print('Custom heap:', time.time() - start)

    start = time.time()
    test_heapq_max(test_list)
    print('Built-in heapq:', time.time() - start)
