def main():
    import sys
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        idx += 1
        p = list(map(int, input[idx:idx + n]))
        idx += n
        
        # If all vertices have the same weight, MST weight is 0
        if all(pi == p[0] for pi in p):
            print(0)
            continue
        
        # Generate all possible edges and their weights
        edges = []
        for i in range(n):
            for j in range(i + 1, n):
                w = max(p[i], p[j]) % min(p[i], p[j])
                edges.append((w, i, j))
        
        # Sort edges by weight
        edges.sort()
        
        # Kruskal's algorithm with Union-Find
        parent = [i for i in range(n)]
        rank = [1] * n
        
        def find(u):
            while parent[u] != u:
                parent[u] = parent[parent[u]]  # Path compression
                u = parent[u]
            return u
        
        def union(u, v):
            u_root = find(u)
            v_root = find(v)
            if u_root == v_root:
                return False
            if rank[u_root] < rank[v_root]:
                parent[u_root] = v_root
            else:
                parent[v_root] = u_root
                if rank[u_root] == rank[v_root]:
                    rank[u_root] += 1
            return True
        
        mst_weight = 0
        for w, u, v in edges:
            if union(u, v):
                mst_weight += w
                if mst_weight >= 10**18:  # To handle large weights
                    break
        
        print(mst_weight)

if __name__ == "__main__":
    main()