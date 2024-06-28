def check_transpose_equality(matrix1, matrix2):
    n = len(matrix1)
    if n != len(matrix2):
        return False

    set1 = set()
    for row in matrix1:
        row_set = frozenset(row)
        set1.add(row_set)

    for row in matrix2:
        row_set = frozenset(row)
        if row_set not in set1:
            return False

    transposed1 = transpose(matrix1)
    transposed2 = transpose(matrix2)

    set2 = set()
    for row in transposed1:
        row_set = frozenset(row)
        set2.add(row_set)

    for row in transposed2:
        row_set = frozenset(row)
        if row_set not in set2:
            return False

    return True


def transpose(matrix):
    size = len(matrix)
    transposed = [[0] * size for _ in range(size)]
    for i in range(size):
        for j in range(size):
            transposed[j][i] = matrix[i][j]
    return transposed


def check_grid_equality(n, m, grid1, grid2):
    if n != m:
        return check_non_square_grid_equality(n, m, grid1, grid2)
    else:
        return check_square_grid_equality(n, grid1, grid2)


def check_square_grid_equality(size, grid1, grid2):
    set1 = set()
    for row in grid1:
        row_set = frozenset(row)
        set1.add(row_set)

    for row in grid2:
        row_set = frozenset(row)
        if row_set not in set1:
            return False

    transposed1 = transpose(grid1)
    transposed2 = transpose(grid2)

    set2 = set()
    for row in transposed1:
        row_set = frozenset(row)
        set2.add(row_set)

    for row in transposed2:
        row_set = frozenset(row)
        if row_set not in set2:
            return False

    return True


def check_non_square_grid_equality(n, m, grid1, grid2):
    set1 = set()
    for row in grid1:
        row_set = frozenset(row)
        set1.add(row_set)

    for row in grid2:
        row_set = frozenset(row)
        if row_set not in set1:
            return False

    set2 = set()
    for j in range(m):
        cur_set = set()
        for i in range(n):
            cur_set.add(grid1[i][j])
        set2.add(frozenset(cur_set))

    for j in range(m):
        cur_set = set()
        for i in range(n):
            cur_set.add(grid2[i][j])
        if frozenset(cur_set) not in set2:
            return False

    return True


def main():
    test_cases = int(input())
    for _ in range(test_cases):
        n, m = map(int, input().split())
        grid1 = [list(map(int, input().split())) for _ in range(n)]
        grid2 = [list(map(int, input().split())) for _ in range(n)]

        if check_grid_equality(n, m, grid1, grid2):
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
