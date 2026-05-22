import sys

def main():
    input = sys.stdin.read().split()
    ptr = 0
    t = int(input[ptr])
    ptr += 1
    for _ in range(t):
        n = int(input[ptr])
        ptr += 1
        if n < 3:
            print("! 1 2 3")
            continue
        current = [1, 2, 3]
        replace_idx = 0
        found = False
        for _ in range(75):
            print(f"? {current[0]} {current[1]} {current[2]}")
            sys.stdout.flush()
            res = int(input[ptr])
            ptr += 1
            if res == -1:
                exit()
            if res == 0:
                print(f"! {current[0]} {current[1]} {current[2]}")
                sys.stdout.flush()
                found = True
                break
            else:
                current[replace_idx] = res
                replace_idx = (replace_idx + 1) % 3
        if not found:
            print(f"! {current[0]} {current[1]} {current[2]}")
            sys.stdout.flush()

if __name__ == "__main__":
    main()