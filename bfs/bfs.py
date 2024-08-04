def bfs(G, v):
    queue = [v]
    marked = [False] * len(G)
    visited = []

    while len(queue) > 0:
        n = queue.pop(0)
        if not marked[n]:
            visited.append(n)
            marked[n] = True
        for neighbor in G[n]:
            if not marked[neighbor]:
                queue.append(neighbor)

    return visited

G = {0:[1,2,3],1:[3], 2:[3], 3:[4], 4:[]}

print(bfs(G, 0))


# 0 - > 1      1 -> 3    2->3  3->4
#   - > 2
#   - > 3