# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def bfs(root):
    queue = [root]
    visited = []
    level = 0
    while len(queue)>0:
        level = []
        qlen = len(queue)
        for i in range(qlen):
            n = queue.pop(0)
            if n:
                level.append(n.val)
                queue.append(n.left)
                queue.append(n.right)
        if level:
            visited.append(level)
    return visited

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        return bfs(root)
        