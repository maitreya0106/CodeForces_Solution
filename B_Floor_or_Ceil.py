import sys

def compute_min_max(x, n, m):
    # Finding the minimum possible value
    for _ in range(min(m, 60)):  # Ceil can be applied at most log(x) times
        x = (x + 1) // 2
        if x == 0:
            return 0, 0  # If x reaches 0, both min and max must be 0

    for _ in range(min(n, 60)):  # Floor operation
        x //= 2
        if x == 0:
            return 0, 0
    
    min_x = x  # This is the minimum x possible

    # Reset x for maximum calculation
    x = int(sys.argv[-1])  # Using sys.argv to re-use the original x value

    for _ in range(min(n, 60)):  # Apply Floor first
        x //= 2
        if x == 0:
            return min_x, 0  # Max x also becomes 0 if it reaches 0

    for _ in range(min(m, 60)):  # Apply Ceil second
        x = (x + 1) // 2
        if x == 0:
            return min_x, 0

    return min_x, x  # Return the computed min and max values

def main():
    input_data = sys.stdin.read().split()
    
    index = 0
    t = int(input_data[index])  # Number of test cases
    index += 1
    results = []
    
    for _ in range(t):
        x, n, m = map(int, input_data[index:index + 3])
        index += 3
        sys.argv[-1] = str(x)  # Store x for reuse in max computation
        min_x, max_x = compute_min_max(x, n, m)
        results.append(f"{min_x} {max_x}")
    
    sys.stdout.write("\n".join(results) + "\n")

# Run the main function
if __name__ == "__main__":
    main()
