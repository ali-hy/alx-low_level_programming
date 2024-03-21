#!/usr/bin/python3
'''solve island perimeter interview question'''

def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    pos = None

    for r, row in enumerate(grid):
        for c, val in enumerate(row):
            if val:
                pos = (r, c)
                break

    if pos is None:
        return 0

    res = 0
    visited = set()
    s = [pos]
    while len(s):
        pos = s.pop()
        r, c = pos

        visited.add(pos)

        if (r-1, c) not in visited:
            if grid[r-1][c]:
                s.append((r-1, c))
            else:
                res += 1
        if (r+1, c) not in visited:
            if grid[r+1][c]:
                s.append((r+1, c))
            else:
                res += 1
        if (r, c-1) not in visited:
            if grid[r][c-1]:
                s.append((r, c-1))
            else:
                res += 1
        if (r, c+1) not in visited:
            if grid[r][c+1]:
                s.append((r, c+1))
            else:
                res += 1

    return res;

if __name__ == '__main__':
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
