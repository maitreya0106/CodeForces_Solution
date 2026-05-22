import sys

def min_changes_to_good_matrix(n, m, matrix):
    row_xor = [0] * n
    col_xor = [0] * m

    # Compute row-wise and column-wise XOR
    for i in range(n):
        for j in range(m):
            val = int(matrix[i][j])
            row_xor[i] ^= val
            col_xor[j] ^= val

    # Count how many rows and columns have XOR == 1
    rows_with_issue = sum(row_xor)
    cols_with_issue = sum(col_xor)

    # The minimum number of changes needed
    return max(rows_with_issue, cols_with_issue)

def main():
    # Fast input reading
    input_data = sys.stdin.read().split()
    
    index = 0
    t = int(input_data[index])  # Number of test cases
    index += 1
    results = []
    
    for _ in range(t):
        n, m = map(int, input_data[index:index + 2])
        index += 2
        matrix = input_data[index:index + n]
        index += n
        
        results.append(str(min_changes_to_good_matrix(n, m, matrix)))
    
    # Fast output
    sys.stdout.write("\n".join(results) + "\n")

# Run the main function
if __name__ == "__main__":
    main()
