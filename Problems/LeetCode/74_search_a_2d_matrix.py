class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        num_rows, num_cols = len(matrix), len(matrix[0])
        last_idx = num_rows * num_cols - 1
        
        # Binary Search.
        l, r = 0, last_idx
        while l <= r:
            m = (l + r) // 2 # middle point
            val_to_check = matrix[m // num_cols][m % num_cols]
            if val_to_check == target:
                # reached the target
                return True
            elif val_to_check > target:
                r = m - 1
            else:
                l = m + 1
        return False
