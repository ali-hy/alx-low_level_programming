#!/usr/bin/python3
'''solve island perimeter interview question'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    start = None
    ROWS = len(grid)
    COLS = len(grid[0])

    for r, row in enumerate(grid):
        for c, val in enumerate(row):
            if val:
                start = (r, c)
                break
        if start is not None:
            break

    if start is None:
        return 0

    res = 0
    visited = set()
    s = [start]
    while len(s):
        pos = s.pop()
        r, c = pos

        if pos in visited:
            continue
        visited.add(pos)

        if (r-1, c) not in visited:
            if r-1 >= 0 and grid[r-1][c]:
                s.append((r-1, c))
            else:
                res += 1
        if (r+1, c) not in visited:
            if r+1 < ROWS and grid[r+1][c]:
                s.append((r+1, c))
            else:
                res += 1
        if (r, c-1) not in visited:
            if c-1 >= 0 and grid[r][c-1]:
                s.append((r, c-1))
            else:
                res += 1
        if (r, c+1) not in visited:
            if c+1 < COLS and grid[r][c+1]:
                s.append((r, c+1))
            else:
                res += 1

    return res


if __name__ == '__main__':
    grid = [
        [0, 1, 0, 0, 0, 1],
        [1, 1, 0, 0, 0, 1],
        [1, 1, 0, 1, 1, 1],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 1, 1, 0, 0]
    ]
    print(island_perimeter(grid))
