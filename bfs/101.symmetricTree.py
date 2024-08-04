# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

def bfs_left(left):
    queue = [left]
    visited = []
    while len(queue)>0:
        n = queue.pop(0)
        if n:
            visited.append(n.val)
            queue.append(n.left)
            queue.append(n.right)
        else:
            visited.append(None)
    return visited

def bfs_right(right):
    queue = [right]
    visited = []
    while len(queue)>0:
        n = queue.pop(0)
        if n:
            visited.append(n.val)
            queue.append(n.right)
            queue.append(n.left)
        else:
            visited.append(None)
    return visited


class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        if not root:
            return True

        if bfs_right(root.right) == bfs_left(root.left):
            return True
        
        return False
