def get_box_id(row, col):
    r = row // 3 + 1
    c = col // 3 + 1
    return (r - 1) * 3 + c - 1
class Solution:
    
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # check rows
        validate = [[False for j in range(10)] for i in range(27)] # row 0-9 col 10-18
        for r, row in enumerate(board):
            for c, cell in enumerate(row):
                if cell == '.':
                    continue
                # check row
                if validate[r][int(cell)]:
                    return False
                validate[r][int(cell)] = True
                # check col
                if validate[9+c][int(cell)]:
                    return False
                validate[9+c][int(cell)] = True
                # check the box
                box_id = get_box_id(r, c)
                if validate[18+box_id][int(cell)]:
                    return False
                validate[18+box_id][int(cell)] = True
        return True
                
                
        