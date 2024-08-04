# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def bfs(p):
        queue = [p]
        visited = []
        while len(queue) > 0:
            n = queue.pop(0)
            if n:
                visited.append(n.val)
                queue.append(n.left)
                queue.append(n.right)
            if not n:
                visited.append(None)
        return visited


class Solution(object):

    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        print(bfs(p))
        if bfs(p) == bfs(q):
            return True

        return False
