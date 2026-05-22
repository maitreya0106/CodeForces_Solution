import sys
from collections import defaultdict

def main():
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        m = int(input[idx+1])
        idx += 2
        matrix = []
        for _ in range(n):
            row = input[idx]
            idx += 1
            matrix.append([int(c) for c in row])
        
        # Compute row_xor and column_xor
        row_xor = []
        for i in range(n):
            xor = 0
            for j in range(m):
                xor ^= matrix[i][j]
            row_xor.append(xor)
        
        col_xor = [0] * m
        for j in range(m):
            xor = 0
            for i in range(n):
                xor ^= matrix[i][j]
            col_xor[j] = xor
        
        overall_xor = 0
        for xor in row_xor:
            overall_xor ^= xor
        
        if overall_xor != 0:
            # Adjust cell (n-1, m-1) to fix overall_xor
            delta = overall_xor
            matrix[n-1][m-1] ^= delta
            row_xor[n-1] ^= delta
            col_xor[m-1] ^= delta
        
        R = sum(1 for xor in row_xor if xor != 0)
        C = sum(1 for xor in col_xor if xor != 0)
        
        # Compute K: maximum number of pairs
        count_rows = defaultdict(int)
        for xor in row_xor:
            if xor != 0:
                count_rows[xor] += 1
        count_cols = defaultdict(int)
        for xor in col_xor:
            if xor != 0:
                count_cols[xor] += 1
        
        K = 0
        for v in count_rows:
            if v in count_cols:
                K += min(count_rows[v], count_cols[v])
        
        minimal_changes = R + C - K
        
        # Pair rows and columns with the same XOR
        row_list = defaultdict(list)
        for i in range(n):
            if row_xor[i] != 0:
                row_list[row_xor[i]].append(i)
        col_list = defaultdict(list)
        for j in range(m):
            if col_xor[j] != 0:
                col_list[col_xor[j]].append(j)
        
        # Process pairs
        for v in list(row_list.keys()):
            if v in col_list:
                while row_list[v] and col_list[v]:
                    i = row_list[v].pop()
                    j = col_list[v].pop()
                    matrix[i][j] ^= v
                    # Update row and column xor
                    row_xor[i] ^= v
                    col_xor[j] ^= v
        
        # Process remaining rows
        for i in range(n):
            if row_xor[i] != 0:
                j = m - 1
                delta = row_xor[i]
                matrix[i][j] ^= delta
                row_xor[i] ^= delta
                col_xor[j] ^= delta
        
        # Process remaining columns
        for j in range(m):
            if col_xor[j] != 0:
                i = n - 1
                delta = col_xor[j]
                matrix[i][j] ^= delta
                row_xor[i] ^= delta
                col_xor[j] ^= delta
        
        print(minimal_changes)
        for row in matrix:
            print(''.join(map(str, row)))

if __name__ == '__main__':
    main()