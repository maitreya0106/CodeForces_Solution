import math
import sys
from collections import defaultdict

def main():
    input = sys.stdin.read
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    for _ in range(t):
        n, m = int(data[idx]), int(data[idx + 1])
        idx += 2
        x = list(map(int, data[idx:idx + n]))
        idx += n
        r = list(map(int, data[idx:idx + n]))
        idx += n
        
        intervals = defaultdict(list)
        max_y = 0
        for i in range(n):
            xi = x[i]
            ri = r[i]
            if ri > max_y:
                max_y = ri
            for y in range(ri + 1):
                s_sq = ri * ri - y * y
                s = int(math.isqrt(s_sq))
                low = xi - s
                high = xi + s
                intervals[y].append((low, high))
        
        total = 0
        for y in intervals:
            lst = intervals[y]
            lst.sort()
            merged = []
            for interval in lst:
                if not merged:
                    merged.append(interval)
                else:
                    last_s, last_e = merged[-1]
                    curr_s, curr_e = interval
                    if curr_s > last_e + 1:
                        merged.append(interval)
                    else:
                        new_e = max(last_e, curr_e)
                        merged[-1] = (last_s, new_e)
            sum_x = 0
            for (s, e) in merged:
                sum_x += e - s + 1
            if y == 0:
                total += sum_x
            else:
                total += sum_x * 2
        print(total)

if __name__ == "__main__":
    main()