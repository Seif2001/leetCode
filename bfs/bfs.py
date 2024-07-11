def bfs(G, v):
    queue = [v]
    marked = [False] * len(G)
    visited = []
    while len(queue) > 0:
        x = queue.pop(0)
        if not marked[x]:
            marked[x] = True
            visited.append(x)
        for n in G[x]:
            if not marked[n]:
                queue.append(n)
        

    return visited

G = {0:[1,2,3],1:[3], 2:[3], 3:[4], 4:[]}

print(bfs(G, 0))